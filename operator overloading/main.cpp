#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    //Complex add(Complex x)
//    Complex operator+(Complex x)
//    {
//        Complex temp;
//        temp.real=real+x.real;
//        temp.img=img+x.img;
//        return temp;
//    }

    void display();
    friend Complex operator+(Complex c1, Complex c2);
    friend ostream & operator<<(ostream &out,Complex &c3);
};

Complex operator+(Complex c1, Complex c2)// no scope resolution operator used.
{
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}

ostream & operator<<(ostream &out,Complex &c3)
{
    out<<c3.real<<"+i"<<c3.img;
    return out;
}

int main()
{
    Complex c1(3,4),c2(5,2),c3;
    //Complex c3=c1.add(c2);
    c3=c1+c2;
    //c3.display();
    cout<<c3<<endl; //(cout<<c3)->this wholw thing becomes cout
    operator <<(cout,c3);
    return 0;
}

void Complex::display()
{
    cout <<real<<" + i"<<img<< endl;
}
