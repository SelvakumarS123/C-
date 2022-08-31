#include <iostream>

using namespace std;

// a function which calls itself. #lol
// using recursion is better than loops

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
        cout<<n<<endl; //the function has called itself for 6 times, but this did not print anything so, after the function ends, it will go back to the previous calls(n=2,n=3,n=4,n=5) simultaneously and print the n values of previous calls one by one
    }
    cout<<endl; // use this statement to understand how line '14' works.
}// every time the function ends, it remembers that it has not executed line'14', so it backtracks(see in output there will be a line gap between 1 & 1) the calls and prints the 'n' value for each call(end fun(2nd time)->line16->line14(print '1')->end fun->L16->L14(print '2')->end fun->L16->L14(print '3')->end fun-----etc-------->L16->L14(print '5')->end func(6th and final time)
// the function has to end 6 times(5,4,3,2,1,0)
int main()
{
    fun(5);
    return 0;
}
