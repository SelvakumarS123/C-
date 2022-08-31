#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    //char *s;
    //cin.getline(s,100) // this is not supported in all compilers especially this one.
    char str[100];
    cout<<"enter a string"<<endl;
    char *s=str;
    cin.getline(s,10); //hmm... interesting..!! 100--> size 10--> reads only 10 input characters (might be useful to restrict user names to just '10' characters)
    cout<<"length = "<<strlen(s)<<endl;

    string str1;
    cout<<"enter a string"<<endl;
    getline(cin,str1);
//    cout<<"length = "<<strlen(str1)<<endl; //str len is not working for this string class 'str1"
//    becoz this(srting class) is a feature of c++ and strlen is inherited from c #lol
    cout<<"length = "<<str1.size()<<endl;
    cout<<"length = "<<str1.length()<<endl;
    //string concatenation
    char str3[20]="good";
    char str4[20]="morning";
    strcat(str3,str4);
    strncat(str3,str4,3);
    cout<<str3<<endl;
    //string copying
    //strncpy(destination,source,length)
    char str5[20]= "";
    char str6[20]= "everyone";
//    strcpy(str5,str6);
    strncpy(str5,str6,4);
    cout<<str5<<endl;
    return 0;
}
