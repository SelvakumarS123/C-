#include <iostream>

using namespace std;

int main()

{
    int hour;
    char heart=3;
    cout<<"ENTER YOUR NEEDED APPOINTMENT HOUR "<<endl;
    cin>>hour;
    if (hour>9 && hour<18)
    {
        cout<<"sorry! "<<hour<<" is a working hour";
    }
    else
    cout << "congo"<<heart<<" your appointment has been fixed" << endl;
    return 0;
}
