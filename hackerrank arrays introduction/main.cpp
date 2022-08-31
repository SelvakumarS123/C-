#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    m=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
//    cout<<arr[2];

 for(m;m>=0;m--)
 {
     cout<<arr[m];
     cout<<" ";
 }
}
