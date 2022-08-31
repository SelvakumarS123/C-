#include <iostream>

using namespace std;

int main()
{
    string str = "Digital Logic and Design";
    int c=0;
//    for(int i=0;str[i]!='\0';i++)
//    {
//        c++;
//    }
//    cout<<"length = "<<c<<endl;

    string::reverse_iterator rit;
//    for(rit=str.rbegin(); rit!=str.rend(); rit++)
//    {
//        c++;
//        cout <<*rit<< endl;
//    }
//    cout<<"length = "<<c<<endl;

    string::iterator it;
    for(it=str.begin(); *it!= '\0'; it++) //
    {
        c++;
        cout <<*it<< endl;
    }
    cout<<"length = "<<c<<endl;
    return 0;
}
