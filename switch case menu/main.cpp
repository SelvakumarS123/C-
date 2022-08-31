#include <iostream>

using namespace std;

int main()
{
    int op_num;
    int a,b,c;
    cout<<"Menu\n";
    cout<<"1-add\n"<<"2-subtract\n"<< "3-multiply\n"<<"4-divide\n"<<"5-modulo\n";
    cin>>op_num;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    switch (op_num)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
        case 5:c=a%b;
        break;
        default:cout<<"invalid option";
    }
    cout<<"result is "<<c<<endl;

    return 0;
}
