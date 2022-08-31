#include <iostream>

using namespace std;

//used for runtime polymorphism

void display()
{
    cout<<"Hello world!" << endl;
}

int maxi(int x, int y)
{
    return x>y?x:y;
}

int mini(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    void (*fq)(); // declaration of function pointer.(make sure the return type is the same as the function you are to assign to the pointer)
    fq=display; // initializing the pointer
    (*fq)(); // calling using function name
    int (*fa)(int,int);
    fa=maxi;
    int b=(*fa)(10,5);
    cout<<b<<endl;
    fa=mini; // run time polymorphism
    int c=(*fa)(10,5);
    cout<<c<<endl;
    return 0;
}
