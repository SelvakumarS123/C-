#include <iostream>

using namespace std;

class Rectangle
{
    private:
       int length;
       int breadth;
       int *p;

    public:

      Rectangle()//non parameterized constructor
      {
          length = 1;
          breadth = 1;
      }
      Rectangle(int l,int b)
      {
          setlength(l);
          setbreadth(b);
          p=new int[b];
      }
      Rectangle(Rectangle &rect)
      {
          length=rect.length;
          breadth=rect.breadth;
          //p=rect.p  //->wrong
          p=new int[breadth];
      }
      void setlength(int l)
      {
          if(l>0)
          {
              length=l;
          }
          else{length=0;}
      }
      void setbreadth(int b)
      {
          if(b>0)
          {
              breadth=b;
          }
          else{breadth=0;}
      }
      int getlength()
      {
          return length;
      }
      int getbreadth()
      {
          return breadth;
      }
      int area();
      int perimeter();
      bool issquare();
      ~Rectangle();
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h=0)
    {
        height = h;
    }
    void setheight(int h)
      {
          if(h>0)
          {
              height=h;
          }
          else{height=0;}
      }

      int getheight()
      {
          return height;
      }
      int volume();
      ~Cuboid();
};
int main()
{
    Cuboid c(5);
    c.setlength(2);
    c.setbreadth(5);
    cout<<c.volume()<<endl;
    return 0;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
int Rectangle::area() // use this practice to avoid the function from becoming in-line while compiling.
{
    return length*breadth;
}
bool Rectangle::issquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle destroyed"<<endl;
}
int Cuboid::volume()
{
    return getlength()*getbreadth()*height;
}
Cuboid::~Cuboid()
{
    cout<<"Cuboid destroyed"<<endl;
}
