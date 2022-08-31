#include <iostream>

using namespace std;

int main()
{
    char x = 127;
    x++;
//    char x=128;
    cout <<"x="<<(int)x<< endl;

//    sign bit --> 1 --> -ve
//    sign bit --> 0 --> +ve
//    127 --> 0 1 1 1 1 1 1 1    (0  1  1  1  1  1  1  1 )
//                               +1  +1 +1 +1 +1 +1 +1 +1
//                                1  2  2  2  2  2  2  2        2-->(1 0)--> put 0 and add 1 to the previous digit
//                                1  0  0  0  0  0  0  0
//                           (-1*128)
//                                (0*64)
//                                   (0*32)...
//    -128--> 1 0 0 0 0 0 0 0
    char y=-128;
    --y;
    cout<<"y="<<(int)y<<endl;

    int a = INT_MAX;
    a++;
    cout <<"a="<<(int)a<< endl;
    return 0;


}
