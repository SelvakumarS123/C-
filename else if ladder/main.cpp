
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter day number"<<endl;
    cin>>num;
    if(num==1)
    {
        cout << "monday" << endl;
    }
    else if (num==2)
    {
        cout << "tuesday" << endl;
    }
    else if(num==3)
    {
        cout << "wednesday" << endl;
    }
    else if(num==4)
    {
        cout << "thursday" << endl;
    }
    else if(num==5)
    {
        cout << "friday" << endl;
    }
    else if(num==6)
    {
        cout << "saturday" << endl;
    }
    else if(num==7)
    {
        cout << "sunday" << endl;
    }
    else
    {
        cout<<"invalid number";
    }
    return 0;

}
