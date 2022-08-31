#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//    int a=15,b=7,i=5;
//    if(a<i && ++i<b){
//    cout<<i<<endl;
//    }
//    if(a>i || ++i<b)
//        cout<<i<<endl;
//    if(int c = a+b; c>a)
//        cout<<c<<endl;

//    char day;
//    cout<<"enter day"<<endl;
//    cin>>day;
//
//    switch(day){
//        case 'm':cout<<"monday";
//            break;
//        case 't':cout<<"tuesday";
//            break;
//        case 'w':cout<<"wednesday";
//            break;
//        case 'h':cout<<"thursday";
//            break;
//        case 'f':cout<<"friday";
//            break;
//        case 'r':cout<<"saturday";
//            break;
//        case 's':cout<<"sunday";
//            break;
//        default:cout<<"invalid day";} //switch case is faster than else if
//
//        int leapyear,year;
//        cout<<"\nenter year"<<endl;
//        cin>>year;
//        if (year%4==0)
//        {
//            if (year%100==0)
//            {
//                if (year%400==0)
//                {
//                    cout<<year<<" is a leap year";
//                }
//                else
//                    {
//                        cout<<year<<" is not a leap year";
//                    }
//            }
//            else
//            {
//                {
//                    cout<<year<<" is a leap year";
//                }
//            }
//        }
//        else
//        {
//            cout<<year<<" is not a leap year";
//        }

//    int m=0,n=10;
//    while(m<=n)
//    {
//        cout<<m<<endl;
//        m++;
//    }
//
//    do
//    {
//        cout<<m<<endl;
//        m++;
//    }while(m<=n);

//    for(;;)
//    {
//        cout<<m<<endl;
//        m++;
//        if(m>10){break;}
//    }

//    int n;
//    cout<<"enter table number"<<endl;
//    cin>>n;
//    for(int i=0;i<=10;i++)
//    {
//        int s;
//        s=i*n;
//        cout<<i<<" x "<<n<<" = "<<s<<endl;
//    }

//    int k=5;
//    for(int i=1;i<=5;i++)
//    {
//        for(int j=1;j<=k;j++)
//        {
//            cout<<"*";
//        }
//        cout<<"\n";
//        k--;
//    }
//    int n=496,sum=0,m;
//    m=2*n;
//    for(int i=1;i<n;i++)
//    {
//        if(n%i==0)
//        {
//            sum=sum+i;
//        }
//    }
//    if(sum==n)
//    {
//        cout<<n<<" is a perfect number"<<endl;
//    }
//    else
//    {
//        cout<<n<<" is a not a perfect number"<<endl;
//    }


//    int n=1724,r;
//    while(n>0)
//    {
//        r=n%10;
//        n=n/10;
//        cout<<r<<endl;
//        cout<<n<<endl;
//    }


//    int n,r,s,t,m;
//    cout<<"enter n"<<endl;
//    cin>>n;
//    m=n;
//
//    while(n>0)
//    {
//        r=n%10;
//        n=n/10;
//        s=pow(r,3);
//        t+=s;
//    }
//    if(t==m)
//    {
//        cout<<m<<" is an amstrong number";
//    }
//
//    else
//    {
//        cout<<m<<" is not an amstrong number";
//    }


//    int n,r,s;
//    cout<<"enter n"<<endl;
//    cin>>n;
//
//    while(n!=0)
//    {
//        r=n%10;
//        n=n/10;
//        s=s*10+r;
//    }
//    cout<<s;

//    int m,n;
//    cin>>m>>n;
//    for(;m!=n;)
//    {
//        if(m>n){m-=n;}
//        else if(n>m){n-=m;}
//    }
//    cout<<"gcd is "<<m;

//    float A[6]={1.3f,2,3.7f,4};
////    char B[]={'A','C',66};
//    for(auto &x:A)
//    {
//        cout<<++x<<endl;
//    }
//    cout<<A[0];


//    int A[]={4,6,9,1,5,2};
//    int maxim=A[0];
//    for(int i=1;i<6;i++)
//    {
//        if(A[i]>maxim)
//        {
//            maxim=A[i];
//        }
//    }
//    cout<<maxim;

//    int A[10],n=10,key;
//    for(int i=0;i<10;i++)
//    {
//        cin>>A[i];
//    }
//    cout<<"enter key "<<endl;
//    cin>>key;
//    for(int i=0;i<=9;i++)
//    {
//        if(A[i]==key)
//            cout<<"key found at index "<<i;
//    }
//    cout<<"key not found"<<endl;


//    int A[10]={6,7,15,17,20,22,25,29,30,33},l=0,h=9,mid,key;
//    cout<<"enter key "<<endl;
//    cin>>key;
//    while(l!=h)
//    {
//        mid = (l+h)/2;
//        if(A[mid]==key)
//        {
//            cout<<"key found at "<<mid<<endl;
//            break;
//        }
//        else if(A[mid]>key)
//        {
//            l-=1;
//        }
//        else if(A[mid]<key)
//        {
//            h+=1v ;
//        }
//    }


//    int A[]={-4,-6,-9,-1,-5,-2};
//    int maxim=A[0]; //int maxim = INT_MIN;
//    for(auto x:A)
//    {
//        if(x>maxim)
//        {
//            maxim=x;
//        }
//    }
//    cout<<maxim;


//    int cnt=1;
//    for(int i=0;i<4;i++)
//    {
//        for(int j=1;j<=4;j++)
//        {
//            cout<<cnt<<" ";
//            cnt+=1;
//        }
//        cout<<endl;
//    }
//
    int n=4;
    for(int i=0; i<4;i++)
    {
        for(int j=0;j<4;j++) //for(int j=0;j<=i;j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }

        }
        cout<<endl;
        n--;
    }
//
//
//    for(int i=0; i<4;i++)
//    {
//        for(int j=0;j<4;j++) //for(int j=0;j<=i;j++)
//        {
//            int k=i+j;
//            if(i+j>=3)
//            {
//                cout<<"*";
//            }
//            else
//            {
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }
//
//
//    for(int i=0; i<5;i++)
//    {
//        for(int j=i;j<5;j++)
//        {
//           cout<<"   ";
//        }
//        for(int k=0;k<i;k++)
//        {
//           cout<<" * ";
//        }
//        for(int l=0;l<i-1;l++)
//        {
//           cout<<" * ";
//        }
//        cout<<endl;
//
//    }

    return 0;
}

