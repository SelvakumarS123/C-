#include <iostream>

using namespace std;

int main()

{
    float basic, allowance, deduction, net;
    cout << "basic salary?"<< endl;
    cin>>basic;
    cout<<"'%' of allowance?"<<endl;
    cin>>allowance;
    cout<<"'%' of deduction?"<<endl;
    cin>>deduction;
    net = basic + basic*allowance/100-basic*deduction/100;
    cout<<"net salary="<<net;
    return 0;
}
