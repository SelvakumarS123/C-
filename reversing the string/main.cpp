#include <iostream>

using namespace std;

int main()
{
//    int n,digits,a,b,c,d,e,f,g;
    int n,digits,a,b,j=1;
    cout<<"enter number of digits in number"<<endl;
    cin>>digits;
    cout << "enter a number" << endl;
    cin>>n;
    for(int i=1;i<=digits;i++)
    {
        b=n;
        a=0;
        if (i>1)
        {
            j*=10;
//            cout<<j<<endl;
            b/=j;
//            cout<<b<<endl;
        }
        a=b%10;
        cout<<a;
    }
//    a=n%10;
//    b=n/10;
//    c=b%10;
//    d=n/100;
//    e=d%10;
//    f=n/1000;
//    g=f%10;

//    cout<<a<<c<<e<<g;
    return 0;
}
