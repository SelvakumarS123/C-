#include <iostream>

using namespace std;

int x =10;

void fun()
{
    static int v = 0; // this will be created in code section, will remain throughout the run time of the program, but cannot be accessed by other funtions.
    int a=5;
    v++;
    a++;
    cout<<a<<" "<<v<<endl; // 'v' wont be created and initialized to '0' every time the function is called. it will remain in the memory and only get modified.
    // static variables are just like global variables , but their acccessability is limited to a particular scope
}
//c++ has block level scope
int main()
{
    int x=20;
    {
        int x=30;
        cout <<x<< endl;
    }
    cout <<x<< endl;
    // if you want to access global 'x', use scope resolution operator
    cout <<::x<< endl; //good.


    fun();
    fun();
    fun();
    fun();
    return 0;
}
