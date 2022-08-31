#include <iostream>

using namespace std;

int main()
{
//    for loop -> counter controlled loop(repeat the steps based on counting)
    cout<<"\nprogram to print first n natural numbers\n"<<endl;
    int n,i;
    cout<<"enter 'n'\n"<<endl;
    cin>>n;
    cout<<"\n";
//syntax --> for(initialization(step1);condition(2nd step);updation(4th step))
//step 3-> processing
//    1)initialized
//    2)condition is checked
//    3)processing is done
//    4)updation(1)
//    2)again condition is checked(2)
//    3)processing is done(3)
//    4)updation(1)
//    2)        (2)
//    3)        (3)
//    4)        (1)
//    2)        (2)
//    3)        (3)
//    4)        (1)
//    2) if condition becomes false, loop ends


    for(i=1;i<=n;i++)
//        read the above code as, i starts from 1, goes upto n and every time i will be increased by 1
    {
        cout<<i<<endl;
    }
//        here,i is working like the counter
    int k=1;
    for(;;)
        {cout<<"hello"<<endl;
        k++;
        if (k>10)
            break;
        }
    return 0;
}
