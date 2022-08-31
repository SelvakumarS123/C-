#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    cout<<"FINDING NATURE OF ROOTS QUADRATIC EQUATION"<<endl;
    float a,b,c,d;
    cout<<"enter 3 nos"<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if (d==0)
    {
        cout<<"roots are real and equal";
        cout<<endl<<(-b+sqrt(d))/(2*a);
        cout<<endl<<(-b-sqrt(d))/(2*a);
//        sqrt(0)=0
    }
    else if (d>0)
    {
        cout<<"roots are real and unequal";
        cout<<(-b+sqrt(d)/(2*a));
        cout<<(-b-sqrt(d)/(2*a));
    }
        else
            {
                cout << "imaginary"<< endl;
            }

    return 0;
}
