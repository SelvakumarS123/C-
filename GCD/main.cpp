#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    c=a;
    d=b;
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else if (b>a)
        {
            b-=a;
        }
    }
    cout <<a<<" = "<<b<< endl;
    cout<<"GCD of "<<c<<" and "<<d<<" is "<<a<<endl;
    return 0;
}
