#include <iostream>

using namespace std;

int main()
{
    int A[10]={0,9,8,7,6,5,4,3,2,1};
    float B[5]={1.1,2.4,3.7,6.2,4.5};
    char C[]={'a','b','c','d','e'};
//    1)if you just give values without giving size, then the size of the array will be equal to the number of values
//    2)if you declare size and do not initialize all values (i.e int D[5]={1,2}), an array of size 5 will be created in the *stack*
//    and rest of the values will be automatically set to '0'(i.e D[5]={1,2,0,0,0}) and will utilize 10 bytes of memory in stack(assuming
//    int takes 2 bytes)
    int E[5]={6,4};
//    cout<<A<<endl;
//    cout << A[8] << endl;
    for(int i=0;i<10;i++)
    {
        cout<<A[i];
        cout<<",";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<B[i];
        cout<<",";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"'";
        cout<<C[i];
        cout<<"'";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<E[i];
        cout<<",";
    }
    return 0;
}
