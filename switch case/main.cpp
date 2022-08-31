#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter day number"<<endl;
    cin>>num;
    switch (num)
    {


    case 1:cout << "monday\n";
    break;
    case 2:cout << "tuesday\n";
    break;
    case 3:cout << "wednesday\n";
    break;
    case 4:cout << "thursday\n";
    break;
    case 5:cout << "friday\n";
    break;
    case 6:cout << "saturday\n";
    break;
    case 7:cout << "sunday\n";
    break;
    default:cout<<"invalid number";
//if you write default inbetween, make sure to add break statement for default too.
//switches cases are faster compared to if and else
    }
    cout<<endl<<endl;
    return 0;
}
