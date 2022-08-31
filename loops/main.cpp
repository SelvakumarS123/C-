#include <iostream>

using namespace std;

int main()
{
    switch(10&6)
//    1.convert 10,6 to binary
//    2.use truth table to check bitwise &
//    3.convert the result to int i.e 2, 'two' will be printed
//    4.no break statement after case 2, fall thru happens and prints 'three' too
    {
        case 1:cout << "one" << endl;
        break;
        case 2:cout << "two" << endl;
        case 3:cout<<"three"<<endl;
    }
    cout<<"\n\n'LOOPS'\n\n";
    cout<<" 1.while\n 2.do while\n 3.for\n 4.for each\n";

    int n,i=0,num_count=0;
    cout<<"\nprogram to print first n natural numbers\n"<<endl;
    cout<<"enter 'n'\n"<<endl;
    cin>>n;
    cout<<"\n";
    while(i<n)
    {
        if (i<=n)
        {
            num_count+=1;
            ++i;
            cout<<"->"<<i<<endl;
        }

    }
    cout<<"Total numbers: "<<num_count<<endl;
    do
        {
            if (i<=n && i>0)
            {
                cout<<"->"<<i<<endl;
                i--;
            }
        }while(i<=n);

    cout<<"Total numbers: "<<num_count<<endl;

    return 0;
}
