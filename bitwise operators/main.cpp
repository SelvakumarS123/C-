#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x=11,y=7,z,z_e1,z_e2,z_e3,s=5;
    z=x&y;
    cout <<"x&y = "<<z<< endl;
//    x = 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1 1 = 11
//
//    y = 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 = 7
//        _______________________________
//    z = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 = 3

    z_e1 = x | y;
    cout <<"x|y = "<<z_e1<< endl;

    z_e2 = x ^ y;
    cout<<"x^y = "<<z_e2<<endl;

    z_e3 = ~ s;
    cout<<"~s = "<<z_e3<<endl;

// s  = 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1 --> 5
//
// ~s = 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 0 --> sign bit becomes -ve.(-)ve numbers in c++ are stored in 2's compliment form)
//
// s --> 1 0 1
//        +1 +1
//      _______
//           2--> 1 0
//      _______
//       1 1 0 --> -6
//

    int m,n,o;

    cout<<"left shift- Enter number to be shifted"<<endl;
    cin>>m;
    cout<<"Enter the shift number"<<endl;
    cin>>n;
    o = m << n ;
    cout<<o<<endl;

//m --> 0 0 0 0 0 1 0 1  ---->5
//     / / / / / / / /
//    0 0 0 0 1 0 1 0 ( if n = 1) ------> 2+8= 10
//
//simple method --> o = m*pow(2,n)
    cout<<"Right shift"<<endl;
    int p=5,q=1,r;
    r = p/pow(2,q);
    cout<<r;
    cout<<"ps~ sign bit is ignored in left and right shift operations";
    return 0;
}
