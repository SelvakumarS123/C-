#include <iostream>

using namespace std;

int main()
{
    string s1 = "";
    cout<<"enter string \n";
    getline(cin,s1);
    string s2 = "";
    int len =(int)s1.length(); // length function returns a long integer.
    s2.resize(len);
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        s2[i]=s1[j];
    }
    s2[len]='\0';
    int pal=s1.compare(s2);
    if (pal==0)
    {
        cout<<s2<<" is a palindriome"<<endl;
    }
    else{
        cout<<s1<<" != "<<s2<<"\n'"<<s1<<"' is not a palindrome"<<endl;
    }
    return 0;
}
