#include <iostream>

using namespace std;


//int main()
//{

//    int n,sum,n2;
//    cout <<"enter 'n'"<< endl;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        if(n%i==0)
//        {
//            sum+=i;
//            cout<<i<<endl;
//        }
//    }
//    n2=2*n;
//    if(n2==sum)
//    {
//        cout<<n<<" is a perfect number";
//    }
//    else
//    {
//        cout<<n<<" is not a perfect number";
//    }

#include<iostream>
using namespace std;

int main()
{
    int n=1,i,num;
    cout<<"enter number :"<<endl;
    cin>>num;
    while(n<=num)
    {
        int sum = 0;
        for (i=1;i<n;i++)
        {
            if(n%i==0)
                sum+=i;
        }
        if(sum == n)
            cout<<n<<endl;
        n++;
    }
    return 0;
}



