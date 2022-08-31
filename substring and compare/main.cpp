#include <iostream>
#include <cstring>
using namespace std;
//  'A' --> char
//  "A" --> str

int main()
{
    //  strstr(main,sub);
    char str1[20] = "programming";
    char str2[20] = "kite";
    if(strstr(str1,str2) != NULL )
    {
        cout << strstr(str1,str2)<< endl;
    }
    else
    {
            cout<<"not found"<<endl;
    }

//  sub character

    //  strchr(main,char)
    //  strrchr(main(char) --> this will check for 'char' from rear end of the string

    char str3[20]="morning";
    cout<<strchr(str3,'n')<<endl;
    cout<<strrchr(str3,'n')<<endl; //case sensitive

//  string compare--> compares 2 strings in dictionary order
    //  strcmp(to be compared(s1), compared with(s2))
//    if s1 comes before s2 in dictionary(alphabetical order) -1ve will be printed
    char s1[20]="banana";
    char s2[20]="apple";
    cout<<strcmp(s2,s1)<<endl;
    cout<<strcmp(s1,s2)<<endl;
//    ascii code --> a->97
//                   A->65
    char s3[20]="applE";
    char s4[20]="apple";
    cout<<strcmp(s2,s4)<<endl;
    cout<<strcmp(s3,s4)<<endl;
    return 0;
}
