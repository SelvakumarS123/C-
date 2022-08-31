#include <iostream>

using namespace std;

int main()
{
    int a,b,d;
    int RollNo = 12;
//      (int variable names should not begin with a number)
    char group = 'A';
//    char -> declaration    group = 'A' -> initialization
    float price = 12.75f;
//    cout <<RollNo;
    cin>>a>>b;
    float c;
    c=(float)a/b;
    d=a%b;
    cout<<"division is "<<c;
    cout<<" mod is "<<d;
//    (we can't perform mod operation on float numbers)
    return 0;
}
