#include <iostream>

using namespace std;

int main()
{
    int A[6]={0,9,8};
    for(int x:A)
//        for each x in A
    {
        cout<<x;
        cout<<",";
    }
    cout<<endl;
    float B[5]={1.1f,2.4f,3,6,4};
    for (int x:B)
    {
        cout<<x;
        cout<<",";
    }
    cout<<endl;
    for (float x:B)
    {
        cout<<x;
        cout<<",";
    }
    cout<<endl;
    for (auto x:B)
    {
        cout<<x;
        cout<<",";
    }
    cout<<endl;
    char C[]={'A',66,'C',68};
    for (auto x:C)
    {
        cout<<x;
        cout<<",";
    }
    cout<<endl;
    for (int x:C)
    {
        cout<<x;
        cout<<",";
    }
    cout<<endl;
    for (char x:C)
    {
        cout<<x;
        cout<<",";
    }
    return 0;
}
