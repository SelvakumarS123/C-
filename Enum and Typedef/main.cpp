#include <iostream>

using namespace std;

enum day {mon,tue,wed,thu,fri,sat,sun};
enum dept{cs=1,ece,eee=5,it,mech};

typedef int marks;
typedef int rollno;

//these mon,tue,wed etc becomes constants of name 'day'
int main()
{
//    const int mon = 0;
//    const int tue = 1;
//    const int wed = 2;
//    (this is lengthy, so we use Enum to define them collectively)
    day d;
    d = mon;
    cout<<mon<<endl;
    dept dep;
    dep = it;
    cout<<dep<<endl;


//Readability issue --> should give meaningful names

//Changing name of data types

    marks m1=100,m2=90,m3=80;
    rollno r1=0,r2=1,r3;
    cout<<m1<<endl;
    cout<<r3<<endl;
    return 0;
}
