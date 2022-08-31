#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    cout <<"enter 'n'"<< endl;
    cin>>n;
    cout<<"\n\n";
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        cout<<sum<<endl;
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}
