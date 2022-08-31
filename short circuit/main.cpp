#include <iostream>

using namespace std;
//short circuit--> a=5 b=6 c=4
//                     if (a>b && a>c)-> here a>b is false so the condition a>c won't even be checked and will jump to next case
//                     if (b>a || b>c)-->here b>a is true so b>c won't be checked
//
int main()
{
    int a=5,b=7,i=5,z=5;
    if(a>b && ++i<b)
    {

    }
    cout<< "i = " <<i<< endl;
//   a>b is false so ++i<b won't be executed and checked and i remains 5.
    if(a<b && ++i<b)
    {
       cout<< "i = " <<i<< endl;
    }
//now a<b is true so ++i will be performed, as the 2nd condition is also true ,so cout statement will also be executed.

    else if(a<b || ++z<b)
//        here both conditions are true but the second condition won't be checked or executed bcoz one true is enough. #sad laip

    {

    }
    cout<< "z = " <<z<< endl;
//    so, never use increment or decrement operator in the second part of a conditional statement,it may or may not get executed.
    if(a<b)
    {
        int l = 1;
        l++;
        cout<<"l = "<<l<<endl;
    }

    if(int k=1; a>k)
        cout<<"this is dynamic declaration"<<endl;
    {
        int m=2;
        if (a>m){cout<<"dummy block declaration"<<endl;}

    }
//    if a variable is declared inside an if block or within the conditional statement(like above),
//    the variable will occupy it's memory in the stack just like other variables(that are declared out of the block)
//    but once the if block is executed,
//    then that variable(dynamically declared variable), along with the memory it occupied in the stack will be erased.
//    while the variables declared outside the block will remain forever in the stack memory.
//    this feature allows us to manage memory efficiently.
    return 0;
}
