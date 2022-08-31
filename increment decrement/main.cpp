#include <iostream>

using namespace std;

int main()
{
//    pre-increment-> ++x
//    post-increment-> x++
//    int x=5,y=5;
    int x,y,z,a,b,c=2,d=3,i=5,j,h=5,k,m=5,l,p=5,q;
//    ++x;
//    cout<<x<<endl;
//    y++;
//    cout<<y<<endl;
    cout<<"enter 'a' "<<endl;
    cin>>a;
    b=++a;
    cout<<"pre:-"<<endl;
    cout<<"a="<<a<<endl;
    cout << "b=" << b<<endl;
    cout<<"enter 'x' "<<endl;
    cin>>x;
    y=x++;
    cout<<"post:-"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    z=++c*d;
    cout<<"z="<<z<<endl;
    z=c++*d;
    cout<<"z="<<z<<endl;
    cout<<"c="<<c<<endl;
    j=2*i++ + 2*++i;    // i=5,i=7 --> 2*5 + 2*7 = 24

    cout<<"j ="<<j<<endl;
    cout<<"i ="<<i<<endl;
//    k=2*++h + 2*h++;
//    (the above statement is incorrect because we cannot use multiple increment , decrement operators in the same variable. The results will vary in different compilers)
    k=2*++h;
    cout<<"k ="<<k<<endl;
    cout<<"h ="<<h<<endl;
    q=k + 2*h++;
    cout<<"q ="<<q<<endl;
    cout<<"h ="<<h<<endl;
//    cout<<"m ="<<m<<endl;
//    l=2*m++; // 2*5
//    cout<<"l ="<<l<<endl;
//    l+=2*m++; // 2*6
    l=2*m++ + 2*++m;
    cout<<"l ="<<l<<endl;
    cout<<"m ="<<m<<endl;
//    q=2*++p;
//    cout<<"q ="<<q<<endl;
//    cout<<"p ="<<p<<endl;
    return 0;
}
