#include <iostream>
#include <string>

using namespace std;

int main()
{
    string :: iterator it; // acts like a pointer, so has to be dereferenced
    string s1 = "how are you!";
//    cout<<*it; //-->'\0'

//    for( it = s1.begin();it != s1.end();it++)
//    {
//        cout <<*it<< endl;
//    }

    for( it = s1.begin();it != s1.end();it++)
    {
        //we can also modify the string using iterator
       *it=*it - 32; // capitalizing all the smaller case alphabets(this won,t work for strings with symbols i,e !,@ etc
    }

    cout<<s1<<endl;

    string ::reverse_iterator rit;

    for(rit = s1.rbegin();rit!= s1.rend();rit++)
    {
        cout <<*rit<<endl;
    }
    return 0;
}
