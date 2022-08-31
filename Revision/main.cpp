#include <iostream>
#include<cmath>
using namespace std;
enum day {sun=1,mon,tue,wed=10,thurs,fri,sat};
typedef int marks;
//enum mark {m1=92,m2,m3,m4,m5,m6,m7,m8,m9};

int main()
{
    int a,b,c,r1,r2;
    b=7;
    a=9;
    c=6;
    r1= (-b + sqrt(pow(b,2)-4*a*c))/2;
    cout<<"roots are "<<r1<<", "<<r2<<endl;
    r2= (-b - sqrt(pow(b,2)-4*a*c))/2;
    char d = 65;
    char h = 'A';
    int e = 60;
    cout<<d%e<<endl;
    float f;
    f=(float)9/4;
    cout<<"f = "<<f<<"\n'A' = "<<d<<endl;
    cout<<"'A' = "<<int(h)<<endl;
    int i=5,j;
    j=i++;
    cout<<"i = "<<i<<"\nj = "<<j<<endl;
    i=5;
    j=++i;
    cout<<"i = "<<i<<"\nj = "<<j<<endl;
    int x=11,q,r,s,y=5;
    char p=5,t,u;
    q=x&y;
    r=x|y;
    s=x^y;
    cout<<q<<endl;
    cout<<r<<endl;
    cout<<s<<endl;
    t=p<<3; // << -> LS -> t= p*2^3
    u=p>>3; // >> -> RS -> u= p/2^3
    cout<<(int)t<<endl;
    cout<<~p<<endl;
    day v;
    v=mon; //if(day==mon){......}
    cout<<v<<"\n"<<fri<<endl;
    marks m1=97,m2=98,m3=99,m4=100;
    cout<<m1<<"\n"<<m2<<"\n"<<m3;
    return 0;
}
