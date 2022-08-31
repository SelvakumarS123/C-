#include <iostream>

using namespace std;

int main()
{
    int n,table;
    cout<<"enter table number"<<endl;
    cin>>n;
    for (int i=1;i<=200;i++)
    {
        table = n*i;
        cout<<i<<" * "<<n<<" = "<<table<<endl;
    }
    return 0;
}
