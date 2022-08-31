#include <iostream>

using namespace std;
// heap memory is global
//'return by address' is used for returning the addresses of heap memory,
// it cannot return addresses in stack, because the data in stack will be deleted once the function ends,
// so we cannot return the address of any local variables(created in stack) to main()
// heap memory will not be deallocated automatically

int *fun(int size) // we should return 'p', here 'p' is a pointer to an array(in heap)of type integer, so return type of the function should be 'int *'
{
    int *p=new int[size]; //    'p' is a pointer to an array(in heap)of type integer
    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
    }
//    for(int i=0;i<size;i++)
//    {
//        cout << *&p[i] << endl;
//    }

    cout<<"p--> "<<p<<endl;
    return p; // returns the address of heap memory(new int[size])
}

int main()
{
    int size;
    cin>>size;
    int *q = fun(size);// this basically means *q = *p ( now, address of 'p' is also the address of 'q')
    // fun() will create some memory in heap and it is handing over that address to the main function(and 'p1' will be a pointer to that address)
    cout<<"q--> "<<q<<endl;
    for(int i=0;i<size;i++)
    {
        cout << q[i] << endl;
    }
    cout<<"\n\n"<<q[3]<<endl;
    return 0;
}
