#include <iostream>

using namespace std;

int main()
{
    int arr[2][3];
    for(auto &x:arr)
    {
        for(auto &y:x)
//            while reading inputs, '&' is must in both for loops(inner(y) and outer(x))
        {
            cin>>y;
        }
    }
    for(auto &x:arr)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
