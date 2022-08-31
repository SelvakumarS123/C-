#include <iostream>

using namespace std;

int main()
{
//  str.substr(start index, number of chars);
    string str = "programming";
    cout << str.substr(3,4) << endl;
    cout<<endl;
    string s1 ="applE";
    string s2 ="Banana";
    cout<< s1.compare(s2)<<endl; // s1 > s2
    cout<<endl;
    cout<< str.at(9)<<endl;
    cout<<endl;
    str[9]='m';
    cout<<str[9]<<endl; // subscripting
    cout<<endl;
    s1+=s2;
    cout<<s1<<endl;
    cout<<endl;
    s2=str;
    cout<<s2<<endl<<endl;
//    cout<<s1+s2<<endl;
    cout<<str + " language";
    return 0;
}
