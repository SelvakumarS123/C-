#include <iostream>

using namespace std;

// --> writing whole program inside a single function(main) is called monolithic programming(this is not good)

//    return-type function-name (parameter list)
//    function can take many inputs(parameters) but can return only one output(return-type)
//    if the function is not returning any values then the return type should be 'void'


int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

float add(float a, float b)
{
    return a+b;
}

int maxim(int a, int b, int c)
{
    if(a>b&&a>c){return a;}
    if(b>a&&b>c){return b;}
    else {return c;}
}

int maxim(int a, int b)
{
    if(a>b){return a;}
    else {return b;}
}

// float maxim(int a, int b) //this is a name conflict, functions that differ only in their return type cannot be overloaded
//{
//    if(a>b){return a;}
//    else {return b;}
//}

// if you want a function with same name then,
                                            ///1) number of parameter should vary
                                                        //    (or)
                                           ///2) data type of parameter should vary

float maxim(float a, float b)
{
    if(a>b){return a;}
    else {return b;}
}

// inside the function avoid using 'cin' and 'cout'. it is a bad function
int main()
{
    int x,y;
    cout<<"enter 2 nos"<<endl;
    cin>>x>>y;
    int z=add(x,y);
    cout<<"sum is "<<z<<endl;

    cout<<"sum + sum is "<<add(x,y,z)<<endl;

//    float i=2.2f,j=4.7f;
//    float k = add(i,j);
//    cout<<"float "<<add(2.2,4.7)<<endl; //these values(2.2 and 4.7) are by default taken as 'double', we don't have an add function for float
    cout<<"float "<<add(2.2f,4.7f)<<endl;  // we have an add function for float

    int a, b, c;
    cout<<"enter 3 nos\n";
    cin>>a>>b>>c;
    int maximum = maxim(a, b, c);
    cout<<maximum<<" is the maximum";

    return 0;
}
