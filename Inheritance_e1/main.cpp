#include <iostream>

using namespace std;

int max(int x, int y)
{
    return x>y?x:y;
}
int min(int x, int y)
{
    return x<y?x:y;
}

class Rectangle
{
    private:
       int length;
       int breadth;
       int *p;

    public:

      Rectangle()//non parameterized constructor
      {
          length = 0;
          breadth = 0;
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
int main()
{
    int (*fp)(int,int);
    fp=max;
    cout<<(*fp)(10,5)<<endl;
    fp=min;
    cout<<(*fp)(10,5)<<endl; //fb is a pointer storing the address of the function named "min".

    Rectangle r(10,5);
    //r.setlength(10);
    //r.setbreadth(5);
    cout<<r.getlength()<<endl;
    Rectangle r2(r);
    cout<<r2.getlength()<<endl;
    cout<<r2.perimeter()<<endl;
    cout<<r2.area()<<endl;
    if(r2.issquare()){
    cout<<"yes"<<endl;
    }
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

// this -> length (use "this ->" keyword to access the data members of that class.
// in struct, by default,everything is public whereas in class every thing is private.
