#include <iostream>

using namespace std;

template<class T>

//generalized functions-->in terms of data type

//in overloaded functions , if the logic is completely same and the only difference between those functions is the data type of parameters, then we can write a single function for parameters of any data type.

//template<class T> // T a class of type 'template' ( 'T' is a template class)

T maxim( T x, T y, T z=0)  // T maxim( T x=0, T y=0, T z=0); --> maxim(); -->maxim without any arguments(but it'll still work)
{
//    return x>y?x:y;// if x>y, return 'x' else, return 'y'
    return x>y && x>z ? x : (y>z?y:z);

}


// default argument function-->helps to combine overloaded functions
// default arguments should be declared from right to left(in parameters)

int add(int x,int y, int z=0) // 'z' is optional, in case if you need to add 3 numbers
    {
        return x+y+z;
    }
int main()
{
    float c=6.9f,d=4.2f,e=7.3f;
    cout <<maxim(c,d,e)<<" is the max"<< endl; // now wherever there is 'T'(in function definition), it will be changed to 'float'
    cout <<maxim(c,d)<<" is the max"<< endl;
    int a,b;
    cout<<"enter 2 nos"<<endl;
    cin>>a>>b;
    cout<<"is "<<a<<" > " <<b<<" ? --> "<< (a>b?"obviously! yes":"hell no")<<endl;
    cout<<add(2,2)<<endl; // z is '0'
    cout<<add(2,2,8); // z takes value '8'
    return 0;
}
