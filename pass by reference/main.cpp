#include <iostream>

using namespace std;

//here formal parameters can directly modify the actual parameters(cuz here, both are same. #lol)

// a function cannot access the variables of another function at all.

int swapping(int &a, int &b)//  here no memory will be allocated for 'a' and 'b', because 'a' and 'b'are just nicknames for 'x' and 'y'.
                            // but a function(swapping) cannot directly access the variables of another function(main)at all.
    // so, in call by reference ,when the program is running the source code for swapping() function is converted into machine code
    // and the machine code for swapping function is pasted at the place of function call in the main function.
    // so ,when call by reference is used... there will be no separate space for swapping() function (in machine code) in the code section.
    // now as the swapping function(as machine code)is inside(at the place of function call) the main function, all variables can be accessed.
    // so whenever i need the actual parameters to be modified, call by reference can be used.
    // if a piece of machine code of a function is copied at the place of function call, then such functions are called as 'inline functions'
    // when we use call by reference, the function automatically becomes inline function
    // i.e in source code(our code) swapping()is a separate function-----> in machine code(after compiling) swapping() is an 'inline' function
{
    cout<<"a--> "<<&a<<"\nb--> "<<&b<<endl;
    int temp;
    temp = a; // so basically 'a' is 'x'
    a = b;
    b = temp;

    // avoid using loops inside call by reference
}
int main()
{
    int x=10,y=20;
    cout<<"x==> "<<&x<<"\ny==> "<<&y<<endl;
    swapping(x,y);
    cout<<"x--> "<<x<<"\ny--> "<<y<<endl;
    return 0;
}

// in call by address, addresses of actual parameters will be passed to formal parameters via pointers
// in call by reference, formal parameters are referenced to actual parameters.

