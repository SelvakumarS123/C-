#include <iostream>

using namespace std;

int main()
{
    int n,digits,a,b,j=1;
    cin>>digits;
    cin>>n;
    for(int i=1;i<=digits;i++)
    {
        b=n;
        a=0;
        if (i>1)
        {
            j*=10;
            b/=j;
        }
        a=b%10;
        cout<<a;
        cout<<" ";
    }
    return 0;
}

