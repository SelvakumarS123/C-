//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    int p=0,np=0;
//    while(t>0)
//    {
//        int n;
//        cin>>n;
//        int div=2;
//        while(div * div<=n)
//        {
//            if(n%div==0)
//            {
//               break;
//            }
//            div++;
//        }
//        if(div*div>n)
//        {
//            cout<<"prime"<<endl;
//            p++;
//        }
//        else
//        {
//            cout<<"not prime"<<endl;
//            np++;
//        }
//        t=t-1;
//    }
//
//    cout<<"p="<<p<<endl<<"np="<<np<<endl;
//    return 0;
//}

//#include <iostream>

//using namespace std;
//
//int main()
//{
//    int n,sum,count=0;
//    cout << "enter a number: " << endl;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        if(n%i==0)
//        {
//            count++;
//        }
//    }
//    if(count==2)
//    {
//        cout<<n<<" is a prime"<<endl;
//    }
//    else
//    {
//        cout<<n<<" isn't a prime";
//    }
//    return 0;
//}

#include <iostream>
using namespace std;
int main()
{
    int t,c,p=0,np=0;
    cin >> t;
    c=0;
    while(t>0)
    {
        c=0;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {

            if(n%i==0)
            {
                c++;
            }
        }

    if(c==2)
    {
        cout<<"prime"<<endl;
    }
    else if(n==1)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
    }
    t--;
    }
    return 0;
}
