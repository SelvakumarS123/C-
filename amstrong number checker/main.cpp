#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,r,sum,m,p;
    cout<<"enter number of digits"<<endl;
    cin>>p;
    cout << "enter a number" << endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n/=10;
        sum+=pow(r,p);
    }

    if (m==sum){cout<<m<<" is an armstrong number"<<endl;}
    else{cout<<m<<" isn't an armstrong number"<<endl;}
    return 0;
}
