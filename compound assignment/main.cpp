#include <iostream>

using namespace std;

int main()
{
    int a,b,c,product,sum;
    cout<<"Enter 3 values"<<endl;
    cin>>a>>b>>c;
//    product = product*a*b*C
    sum = a+b+c;
    product=a*b*c;
    cout<<"Sum is"<<sum<<endl;
    cout<<"Product is"<<product<<endl;
    cout<<"Enter sum value"<<endl;
    cin>>sum;
    cout<<"Enter product value"<<endl;
    cin>>product;
    sum+=sum;
    product*=product;
    cout<<"Sum is"<<sum<<endl;
    cout<<"Product is"<<product<<endl;
    sum-=a+b+c;
    product/=(a*b*c);
    cout<<"Sum is"<<sum<<endl;
    cout<<"Product is"<<product<<endl;
    return 0;
}
