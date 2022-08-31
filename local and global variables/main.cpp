#include <iostream>

using namespace std;

int g=10; // memory for this 'g' will be allocated in the "code section"
         // and all functions (with memory in stack or anywhere) can access and modify 'g'

void fun()
{
    int g=10;
    g++; // now this will increment local variable 'g' (because local variable 'g' is in the nearest scope).
}
int main()
{
    cout <<g<< endl;
    fun();
    cout <<g<< endl;
    return 0;
}
