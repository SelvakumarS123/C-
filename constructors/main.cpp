#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l=0, int b=0);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength(){return length;} //automatically made 'inline'.
    int getBreadth();
    //accessors->inline
    int area();
    int perimeter();
    bool isSquare();//inspector(enquiry)
    ~Rectangle();//destructor

};

class Test
{
private:
    int a;
    int *p;
public:
    Test(int x)
    {
        a=x;
        p=new int[a];
//        cout<<a<<endl;
//        cout<<&p<<endl;
        cout<<&p<<endl;
    }

    Test(Test &t)
    {
        a=t.a;
        //p=t.p;
        p= new int[a];
//        cout<<a<<endl;
//        cout<<&p<<endl;
        cout<<&p<<endl;
    }
};
int main()
{
    Rectangle r(10,10);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    Rectangle r2(r);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
    if(r2.isSquare())
    {
        cout<<"yes"<<endl;
    }

    Test t(5);
    Test t2(t);
    return 0;
}


    Rectangle::Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle::Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;

    }

    void Rectangle::setLength(int l)
    {
        if(l>0)
        {
            length=l;
        }
        else{length =1;}
    }
    void Rectangle::setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else{breadth =1;}
    }

    inline int Rectangle::getBreadth()
    {
        return breadth;

    }

    int Rectangle::area()
    {
        return length*breadth;
    }

    int Rectangle::perimeter()
    {
        return 2*(length+breadth);
    }
    bool Rectangle::isSquare()
    {
        return length==breadth;
    }

    Rectangle::~Rectangle()
    {
        cout<<"Rectangle destroyed"<<endl;
    }
