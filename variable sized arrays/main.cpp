#include <iostream>
using namespace std;


int main() {
    int n,q,m=0;
    cin>>n>>q;
    int *arr[n];
    // example: if n=2, we have created 2 pointers in a single array i.e arr[0] at 0th index of array ('arr') and arr[1] at index 1 of 'arr'.

    while(n--)
    {
        int s;
        cin>>s;
        arr[m]=new int[s]; // when m=0, we are giving the size of the array to be created in heap with pointer(variable) name arr[0],
        //and when m=1, we are giving the size of arr[1]
        for(int i=0;i<s;i++)
        {
            cin>>arr[m][i];
//            cout<<arr[m][i];
        }
        m++;
    }

    int siz=3;
    for(int i=0;i<2;i++)
    {

        for(int j=0;j<siz;j++)
        {
            cout<<arr[i][j]<<" "; //arr[i] is pointer [j] is index of element in that pointer
                                 //here we are accessing two different pointers (arr[0] and arr[1]),
                                // which are in the same array(arr)in stack
        }
        siz+=2;
//        if(i=1)
//        {
//            for(int k=0;k<5;k++)
//            {
//                cout<<arr[i][k]<<" ";
//            }
//        }



    }

    for(int j=0;j<q;j++)
    {
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
}
