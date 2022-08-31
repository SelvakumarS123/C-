#include <iostream>

using namespace std;

int main()
{
    int A[6]={3,5,2,7,8,9};
//    for(int i=0;i<5;i++)
//    {
//        cout<<A[i];
//    }

//    for using *for* loop, the size of the array must be known
//    but in *for each* loop we need not know the array size,it automatically iterates through all the values,this is the benifit
//    if you need to iterate upto specific values in array, then use for loop

    for(int x:A)
    {
        x++;
        cout<<x;
        cout<<",";
    }
    cout<<endl;

//    the above code(i.e x++) will not modify the original array value,bcoz x is getting only a copy of the value

    for(int x:A)
    {
        cout<<x;
        cout<<",";
    }
    cout<<endl;

//    if you want to modify the original array value, use reference(&)

    for(int &x:A)
    {
        x++;
    }
    for(int x:A)
    {
        cout<<x;
        cout<<",";
    }

    return 0;
}
