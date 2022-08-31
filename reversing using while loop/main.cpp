#include <iostream>

using namespace std;

int main()
{
    long int n,r;
    cout << "enter a number" << endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n/=10;

//        in each iteration ,the above step will remove one digit from "n" because this is integer division.
//        cout<<n<<endl;
        cout<<r;
    }

    return 0;
}
