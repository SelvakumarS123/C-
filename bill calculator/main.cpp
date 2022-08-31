#include <iostream>

using namespace std;

int main()
{
    float bill,discount;
    cout<<"enter bill amount"<<endl;
    cin>>bill;
    cout<<"Bill: "<<bill<<endl;
    if (bill>=100)
    {
        discount = bill*20/100;
        cout<<"Discount: "<<discount<<endl;
    }
    else if(bill>100 && bill<500)
    {
        discount = bill*10/100;
        cout<<"Discount: "<<discount<<endl;
    }
    else{
        discount = 0.0;
        cout<<"Discount: "<<discount<<endl;
    }
    cout << "payable amount: "<<bill-discount<< endl;
    return 0;
}
