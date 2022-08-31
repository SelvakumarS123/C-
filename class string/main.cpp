#include <iostream>
#include <string> // here <string> is a class in c++ library

using namespace std;

int main()
{
    string str1; // here we are declaring an 'object'(str1) of type 'class' (string).
                //'str1' will automatically create an array internally.
                // array size(capacity of a string) will be always larger than the length of the string .
                // extra space is called buffer space
                // any array can't be expanded .
            //so if string has to be expanded, a new array of 'larger' size will be created and the contents of the previous smaller array(string) will be copied to the new array and the old smaller array will be deleted.all these process happen internally within the string class.

    cout << "enter a string" << endl;
    getline(cin,str1);
    cout<<str1<<endl;
    cout<<str1.length()<<endl; // length function is called up-on the object(str1)
    cout<<str1.size()<<endl;
    cout<<str1.capacity()<<endl;
    str1.resize(30);
    cout<<str1.capacity()<<endl;
    cout<<str1.max_size()<<endl; // maximum size allowed depends on the compiler. here, it is allowed upto 9223372036854775807 #lmfo
    cout<<str1.empty()<<endl; // 0 -> no it is not empty
    str1.clear();
    str1.erase(); // same as above nothing new
    cout<<str1.empty()<<endl; // 1 -> yes it(str1) is empty
    if (str1.empty())
    {
        cout<<"string is empty"<<endl;
    }
    else
    {
        cout<<str1<<endl;
    }
    return 0;
}
