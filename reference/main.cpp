#include <iostream>

using namespace std;

int main()
{

    int x=5,a;
    a=x; //x-->10--> data so it x is r value(data value)
    x=10; // here x is a variable which stores address of 10, so x is called l-value(address value)
    cout<<a<<endl;
    // referncing y to x,
    int &y=x; // now, here x acts as l-value(address)
    //this y doesn't consume any memory, now the address of 10 has two names(x and y)n
    //you can access the data '10' using both x and y
    //here after you cannot use 'y' as variable in this program.
    cout<<x<<"-->";
    cout<<&x<<endl;
    cout<<y<<"-->";
    cout<<&y<<endl;
    x++;
    cout<<y<<endl;
    y++;
    cout<<x<<endl;
    return 0;
}
