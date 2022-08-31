#include <iostream>

using namespace std;
//use,
//for loop->when number of times of repetition is known
//while loop->when number of times of repetition is not known

int main()
{
    int n,fact=1;
    cout<<"enter number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
        cout<<n<<"! = "<<fact<<endl;
    }

    return 0;
}
