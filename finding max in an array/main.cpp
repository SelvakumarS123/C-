#include <iostream>

using namespace std;

int main()
{
    int A[]={-4,7,5,3,1,9,10,-45,19,23,11,69,36,16},y;
    int max=INT_MIN;
//    (a built in constant, useful when including -ve numbers)
//    for(int x:A)
//    {
//        if (x>=y)
//        {
//            y=0;
//            y=x;
//        }
//
//    }
//     cout<<y;

    for(int x:A)
    {
        if (x>=max)
        {
            max=x;
        }

    }
     cout<<"max is "<<max<<endl;
    int min=INT_MAX;
    for(int x:A)
    {
        if (x<min)
        {
            min=x;
        }

    }
     cout<<"min is "<<min<<endl;
    return 0;
}
