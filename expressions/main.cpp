#include <iostream>

using namespace std;

int main()
{
//    associativity --> left to right
//    ()--> *,/,% --> +,-
//    area of triangle = 1/2(b*h)
    int a=1,b=2,c,d,base=4,height=10;
    c=a/b;
//    1/2 is 0.5(float) so it won't be printed instead the (float)value will be treated as 0.
    cout <<c<< endl;
    d=base*height/2;
    cout<<d<<endl;
//    or d = 0.5*b*h
    float base_e1,h,area;
    cout<<"ENTER BASE AND HEIGHT"<<endl;
    cin>>base_e1>>h;
    area = (base_e1*h)/2;
    cout<<"AREA IS "<<area<<" sq.units"<<endl;
    return 0;
}
