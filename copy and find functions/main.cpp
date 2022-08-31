#include <iostream>
#include <string>
using namespace std;

int main()
{
//  s.copy(char, des[]);
    string str0 ="hello world";
    string str1="wellcome";
    char str2[14];
    str1.copy(str2,str1.length());
    str2[str1.length()]='\0';
    cout<<str2<<endl;
    str0.copy(str2,4);
    str2[8]='\0';
    cout<<str2<<endl;
    // the weird characters are garbage values , '\0' is not inserted(copied) automatically. so just uncomment

    //finding

//  s.find("str" or 'char');
//  s.rfind("str" or 'char');
    string str3 = "hey y'all what up? cheers";
    cout<<str3.find("a")<<endl;
    cout<<str3.rfind('a')<<endl;  //looking from the rear end.
    cout<<str3.rfind('k')<<endl; // this will give a value out of(larger then) string length.

    cout<<str3.find_first_of('e')<<endl;      // it starts checking from the front
    cout<<str3.find_last_of('e')<<endl;      // it starts checking from the last
    cout<<str3.find_first_of("la")<<endl;   // this is not like .find, it looks for character individually, if any of the character('l' or 'a') is found, it will return it's index.
    cout<<str3.find_last_of("la")<<endl;   // looks from right end to left end
    cout<<str3.find_first_of('e',9)<<endl;// start checking for 'e' from 9th index till end(right)
    cout<<str3.find_last_of('e',9)<<endl;// it starts checking from the rear end from 9th index to the front(left)

    return 0;
}
