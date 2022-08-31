#include <iostream>

using namespace std;

class Rational
{
private:
    int p;
    int q;

public:
    Rational(int p=1,int q=1)
    {
        this -> p=p;
        this -> q=q;
    }
    Rational(Rational &r)
    {
        this -> p=r.p;
        this -> q=r.q;
    }
//    Rational add(Rational r2)
//    {
//        Rational temp;
//        temp.p=p+r2.p;
//        temp.q=q+r2.q;
//        return temp;
//    }

    Rational operator+(Rational r)
    {
        Rational temp;
        cout<<this -> p<<"*"<<r.q<<"+"<<this->q<<"*"<<r.p<<"=";
        temp.p=this->p*r.q+this->q*r.p;
        cout<<temp.p<<"\n";
        temp.q=q*r.q;
        return temp;
    }
    //friend Rational operator+(Rational r1, Rational r2);
    friend ostream & operator<<(ostream & o,Rational & r3);

};


ostream & operator<<(ostream & o,Rational & r3)
{
    o<<r3.p<<"/"<<r3.q<<endl;
    return o;
}
int main()
{
    int p,q;
    cout<<"Enter p & q\n";
    cin>>p>>q;
    Rational r1(p,q),r2(2,5),r3;
    //r3=r2.add(r1);
    r3=r2+r1; //same as r2=r2+r1;
    cout<<r3;
    return 0;
}

//Rational Rational ::operator+(Rational r1,Rational r2) // this is wrong because c3 is a friend, so use friend function.
//{
//    Rational temp;
//    temp.p=r1.p+r2.p;
//    temp.q=r1.q+r2.q;
//    return temp;
//}
