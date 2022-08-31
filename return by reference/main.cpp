#include <iostream>

using namespace std;

// usually function is an R value i.e y = fun(x)

// we cannot return reference of a local variable(from fun()) to main()
int &fun(int &a) // here no memory will be allocated for 'a', because 'a' is just a nickname for 'x' ... so i am playing with the actual value of 'x' here(inside fun())
{
    cout<<a<<endl;
    cout<<endl;
    return a; //the return type of 'a' is as reference(to fun()), so fun()is a reference to 'a' and 'a' itself is a reference to 'x',
             // so fun() is a reference of the local variable,(in main()) 'x'.
}
int main()
{
    int x=10;
    fun(x);      // this line will print because there is 'cout' statement inside fun()
    fun(x)=20;  // fun()(here,behaves as 'L' value) is a reference of the local variable 'x' , so basically here, fun(x) = x (different names for same value(same address))
    cout<<"fun(x)--> "<<fun(x)<<endl; // here function(fun()) is called as well as it's value is printed.
//  now 'x' = 20 'line number 10' inside fun() will print '20', because the function fun() is called in above line.
//  now 'x' has 2 nick names, 'a' and 'fun(x)', however 'fun(x)' behaves both as a function and a nickname(reference) for'x'
    return 0;
}
