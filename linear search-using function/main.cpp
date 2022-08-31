#include <iostream>

using namespace std;

int search(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int k;
    cout<<"enter element to search"<<endl;
    cin>>k;
    int arr[10]={2,4,3,5,8,9,6,7,1};
    int index=search(arr,9,k);
    cout<<"element found at index -> "<<index;
    return 0;
}
