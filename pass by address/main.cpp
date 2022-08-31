#include <iostream>

using namespace std;

// here formal parameters can indirectly(using pointers) modify the actual parameters

void swapping(int *a,int *b) // pointer variables are used for storing addresses(of actual parameters)
                            //  i.e   a--->x(address of x is stored in 'a' and so 'a' will be pointing to 'x') b--->y
{
//    a,b--> formal parameters
    cout<< "address of 'a' = "<<a<<"\naddress of 'b' = "<<b<<endl;
    cout <<"\na-> "<<*a<<"\nb-> "<<*b<< endl; // a-->  0x62fe1c , *a --> 10
    int temp;
    temp = *a; // dereferencing to get 'value' of a from x(10)
    *a = *b; // a=10,b=20----->a=20,b=20
    *b = temp; //a=20,b=20,temp=10 ----->a=20,b=10,temp=10
    cout<< "\n\naddress of 'a' = "<<a<<"\naddress of 'b' = "<<b<<endl;
    cout <<"\na-> "<<*a<<"\nb-> "<<*b<< endl;
}

int main()
{
    int x=10,y=20;
    swapping(&x,&y); //actual parameters
    cout<< "\n\naddress of 'x' = "<<&x<<"\naddress of 'y' = "<<&y<<endl;
    cout <<"\nx-> "<<x<<"\ny-> "<<y<< endl;
    return 0;
}
