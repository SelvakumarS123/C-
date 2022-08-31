#include <iostream>

using namespace std;

// 1)pass(call) by value
// 2)pass by address
// 3)pass by reference

void swapping(int a,int b)//this function does not return anything so use 'void'
{
//    a,b--> formal parameters
    cout <<"a-> "<<a<<"\nb-> "<<b<< endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout <<"\n\na-> "<<a<<"\nb-> "<<b<< endl;
}
int main()
{
    int x=10,y=20;
    swapping(x,y); //actual parameters
    cout <<"\n\nx-> "<<x<<"\ny-> "<<y<< endl;
// in call by value method(above method), value of actual parameters is copied in formal parameters,
// and if any change happens in formal parameters(a=20,b=10 -->swapped), that will not reflect(swap) in the actual parameters ( i.e the activation records of main ans swapping is different).
// shortly, call by value cannot modify the actual parameters. // call by value is used in only in functions which returns values
    return 0;
}
