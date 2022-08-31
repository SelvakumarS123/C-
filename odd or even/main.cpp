#include <iostream>

using namespace std;

int main()
{
    cout<<" odd even finder"<<endl;
    int num;
    cout<<"enter the num to check"<<endl;
    cin>>num;
    if (num > 0){cout<<num<< " is +ve"<<endl;}
    else{cout<<num<<" is -ve"<<endl;}
    if(num%2 == 0)
    {
        cout<<num<<" is even";
    }
    else
    {
        cout<<num<<" is odd";
    }
    return 0;
}
