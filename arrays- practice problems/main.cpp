#include <iostream>

using namespace std;

int main()
{
    int A[]={1,2,3,4,5,6,7};
    int sum=0;
    for(int x:A)
    {
        sum=sum+x;
        cout<<sum<<endl;
    }
    return 0;
}
