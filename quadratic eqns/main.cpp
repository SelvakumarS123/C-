#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    float root1,root2;
    cout<<"Enter 3 values"<<endl;
    cin>>a>>b>>c;
    root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    cout << "Roots are "<<root1<<","<<root2 << endl;
//    calculating speed
    int u,v,acc;
    float speed;
    cout<<"Enter u,v and acc"<<endl;
    cin>>u>>v>>acc;
    speed = (v*v-u*u)/(2*acc);
    cout<<"Speed is "<<speed;
    return 0;
}
