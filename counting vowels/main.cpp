#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"enter str"<<endl;
    getline(cin,str);
    string vowel ="AEIOUaeiou";
    int v=0,cons=0,words=0;
    for(int i = 0; str[i]!='\0';i++)
    {
//        for(int j = 0; vowel[j]!='\0'; j++)
//        {
//            if(str[i]==vowel[j])
//            {
//                v++;
//            }
//        }
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
            str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            v++;
        }
        else if(str[i]==' ')
            {
                if(str[i+1] == ' ')
                {
//                    for(int j=0;j==' ';j++)
//                    {
//
//                    }
                }
                else
                {words++;}
            }
        else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            {
                cons++;
            }
    }
    cout <<"vowels = "<<v<<endl<<"consonants = "<<cons<<endl<<"words = "<<words+1<< endl;
    return 0;
}
