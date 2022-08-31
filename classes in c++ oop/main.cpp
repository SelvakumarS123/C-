#include <iostream>

using namespace std;

class rectangle
{
    //private:
    public:
    int length;
    int breadth;
    public:
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
//    rectangle r1;
    rectangle *ptr=new rectangle;
//    ptr=&r1;

    ptr -> length=10;
    ptr -> breadth=5;
//    cout<<r1.area()<<endl;
//    cout <<r1.perimeter()<< endl;
//    r1.length=20;
//    cout<<r1.length;

    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
    return 0;
}
