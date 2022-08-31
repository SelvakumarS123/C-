#include <iostream>

using namespace std;
class Base

{
public:
    Base()
    {
        cout<<"Non-prm Base\n";
    }
    Base(int x)
    {
        cout<<"prm Base \n"<<x<<endl;
    }
};
class Derived:public Base
{
    //Default constructor of Base is the raw material for this derived class
public:
    Derived()
    {
        cout<<"Non-prm Derived\n";
    }
//    Derived(int a)
//    {
//        cout<<"prm Derived \n"<<a<<endl;
//    }
    Derived(int a,int x):Base(x)
    {
        cout<<"prm Derived \n"<<a<<endl;
    }
};
int main()
{
    Derived d;
    Derived d1(2,3);//line-wise execution order 37-> 29-> 12-> 14-> 29-> 31
    return 0;
}
