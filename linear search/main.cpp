#include <iostream>

using namespace std;

int main()
{
    int n,key;
    cout<<"enter array size ";
    cin>>n;
    int A[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the value you want to search(key)"<<endl;
    cin>>key;
    for(int x:A)
    {
        if(x==key)
        {
            cout<<"index of '"<<x<<"' = "<<A[x]
            <<endl;
        }
    }

//    for(int x:A)
//    {
//      y++;
//    }
//    cout<<y<<endl;
//    for(int i=0;i<y;i++)
//    {
//    }
    return 0;
}
