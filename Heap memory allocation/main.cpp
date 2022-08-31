#include <iostream>

using namespace std;

//we don't assign simply a single integer or character in heap, we only assign an array in heap memory.
//new-->memory is allocated dynamically(at runtime), in heap

int main()
{
//    int *p;
//    p=new int[5];
    int size;
    cout<<"enter size\n";
    cin>>size;
    int *p=new int[size];

//    only the memory for 'new int[5]' is assigned in heap and the memory for address variable('p') storing its address is assignes in stack
//    an array created in stack,will automatically get deleted once it runs of the scope
//    but heap memory will remain as long as the program runs
//    so, heap memory must be de allocated

//    cout<<p<<endl;
//    cout<<*p;

    cout<<"enter elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }

    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    p[2]=20;

    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }


    delete []p;
    p=nullptr;
    return 0;
}
