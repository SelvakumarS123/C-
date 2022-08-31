#include <iostream>

using namespace std;

int main()
{
    //upper to lower
    string str;
    cout<<"enter str"<<endl;
    getline(cin,str);
    string::iterator it;
    for(it=str.begin(); *it!= '\0'; it++)
    {
        if(*it >=65 && *it <=90)
        {
            *it+=32;
        }
        else if(*it>=97 && *it<=122)
        {
            *it-=32;
        }
//        cout<<str;
    }
    cout<<str;
    return 0;
}
