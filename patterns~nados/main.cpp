//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n,sp,st=1,val;
//    cin >> n;
//    sp=n/2;
//    val=1;
//    for(int i=1; i<=n; i++)
//    {
//        int colval=val;
//        for(int j=1;j<=sp;j++)
//        {
//            cout<<"\t";
//        }
//        for(int j=1;j<=st;j++)
//        {
//            cout<<colval<<"\t";
//            if(j<=st/2)
//            {
//                colval++;
//            }
//            else{
//                colval--;
//            }
//        }
//        cout<<endl;
//
//        if(i<=n/2)
//        {
//            sp--;
//            st+=2;
//            val++;
//        }
//        else{
//            sp++;
//            st-=2;
//            val--;
//        }
//
//    }
//
//}
//


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n,sp,st1=1,st2=1,colval=1;
//    cin >> n;
//    sp=2*n-3;
//    for(int i=1; i<=n; i++)
//    {
//        int cval=1;
//        for(int j=1;j<=st1;j++)
//        {
//            cout<<cval<<"\t";
//            if(j<n)
//            {
//                cval++;
//            }
//        }
//
//        for(int j=1;j<=sp;j++)
//        {
//            cout<<"\t";
//        }
//        for(int j=1;j<=st2;j++)
//        {
//            cval--;
//            cout<<cval<<"\t";
//
//        }
//        cout<<endl;
//
//        if(i<n-1)
//        {
//            sp-=2;
//        }
//        else{
//            sp-=1;
//        }
//        if(i==n-1)
//        {
//        }
//        else{
//            st2++;
//        }
//        st1++;
//    }
//
//}
//
//

//
//#include <iostream>
//using namespace std;
//int main(int agrc, char**argv){
//    int n,sp,st;
//    cin >> n;
//    sp=n/2;
//    st=1;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=sp;j++)
//        {
//            if(i==(n/2)+1)
//            {
//                cout<<"*\t";
//            }
//            else
//            {
//                cout<<"\t";
//            }
//
//        }
//        for(int j=1;j<=st;j++)
//        {
//            cout<<"*\t";
//        }
//        cout<<endl;
//        if(i<=n/2)
//        {
//            st++;
//        }
//        else
//        {
//            st--;
//        }
//    }
//
//}

//#include <iostream>
//using namespace std;
//int main(int agrc, char**argv){
//    int n,sp1,sp2,st;
//    cin >> n;
//    sp1=1;
//    sp2=n/2;
//    st=n/2;
//    for(int i=1;i<=n;i++)
//    {
//        if(i<=n/2+1)
//        {
//            if(i==1)
//            {
//                for(int j=1;j<=n;j++)
//                {
//                    cout<<"*\t";
//                }
//
//            }
//            else{
//                for(int j=1;j<=sp1;j++)
//                {
//                    cout<<"\t";
//                }
//                cout<<"*\t";
//                for(int j=1;j<=sp2;j++)
//                {
//                    cout<<"\t";
//                }
//                if(i<=n/2)
//                {
//                    cout<<"*\t";
//                }
//                sp1++;
//                sp2-=2;
//                }
//            cout<<endl;
//        }
//        else if(i>n/2+1)
//        {
//            for(int j=1;j<=sp1-2;j++)
//            {
//                cout<<"\t";
//            }
//            for(int j=1;j<=st;j++)
//            {
//                cout<<"*\t";
//            }
//            sp1--;
//            st+=2;
//            cout<<endl;
//        }
//    }
//
//}


//#include <iostream>
//using namespace std;
//int main(int agrc, char**argv){
//    int n,sp,st;
//    cin >> n;
//    sp=0;
//    st=n;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=sp;j++)
//        {
//            cout<<"\t";
//        }
//        for(int j=1;j<=st;j++)
//        {
//            if(i > 1 && i <= n / 2 && j > 1 && j <= st-1)
//            {
//                cout<<"\t";
//            }
//            else
//            {
//                cout<<"*\t";
//            }
//        }
//        if(i<=n/2)
//        {
//            st-=2;
//            sp++;
//        }
//        else
//        {
//            st+=2;
//            sp--;
//        }
//        cout<<endl;
//
//    }
//
//}


//#include <iostream>
//using namespace std;
//int main(int argc, char** argv){
//    int n;
//    cin >> n;
//
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=n;j++)
//        {
//            if(i==n/2+1||j==n/2+1)
//            {
//                cout<<"*\t";
//            }
//            else if(i==1&&j<=n/2+1)
//            {
//                cout<<"*\t";
//            }
//            else if(j==n&&i<=n/2+1)
//            {
//                cout<<"*\t";
//            }
//            else if(j==1&&i>n/2+1)
//            {
//                cout<<"*\t";
//            }
//            else if(i==n&&j>n/2+1)
//            {
//                cout<<"*\t";
//            }
//            else{
//                cout<<"\t";
//            }
//        }
//        cout<<endl;
//    }
//
//}


//#include <iostream>
//using namespace std;
//int main(int argc, char** argv){
//    int n;
//    cin >> n;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=n;j++)
//        {
//            if(j==1||j==n)
//            {
//                cout<<"*\t";
//            }
//            else if(i==n/2+1&&j==n/2+1)
//            {
//                cout<<"*\t";
//            }
//            else if(i>n/2+1&&i>>j&&i!=n)
//            {
//                cout<<"*\t";
//            }
//            else if(i>n/2+1&&j>=i&&i!=n)
//            {
//                cout<<"*\t";
//            }
//            else{cout<<"\t";}
//        }
//        cout<<endl;
//    }
//
//}

//#include<iostream>
//using namespace std;
//int digFreq(int n, int d)
//{
//  int r,cnt=0;
//  while(n!=0)
//  {
//    r=n%10;
//    n/=10;
//    if(r==d)
//    {
//        cnt++;
//    }
//  }
//  return cnt;
//}
//int main() {
//  int n, d;
//  cin >> n >> d;
//  int res = digFreq(n, d);
//  cout << res << endl;
//}

//#include<iostream>
//using namespace std;
//int DecToBinary(int n)
//{
//    if(n>0)
//    {
//        int r;
//        r=n%2;
//        n/=2;
//        DecToBinary(n);
//        cout<<r;
//    }
//}
//
//int DecToOct(int n)
//{
//    if(n>0)
//    {
//        int r;
//        r=n%8;
//        n/=8;
//        DecToOct(n);
//        cout<<r<<endl;
//    }
//}
//int DecToHex(int n)
//{
//    if(n>0)
//    {
//        int r;
//        char c;
//        r=n%16;
//        n/=16;
//        switch(r)
//        {
//            case 10: c='A';
//            break;
//            case 11: c='B';
//            break;
//            case 12: c='C';
//            break;
//            case 13: c='D';
//            break;
//            case 14: c='E';
//            break;
//            case 15: c='F';
//            break;
//        }
//        DecToHex(n);
//
//        if(r<=9)
//        {
//            cout<<r;
//        }
//        else
//        {
//            cout<<c;
//        }
//    }
//}
//int DecToAny(int n, int b){
//
//    switch(b)
//    {
//        case 2:DecToBinary(n);
//        break;
//        case 8:DecToOct(n);
//        break;
//        case 16:DecToHex(n);
//        break;
//    }
//}
//int main(){
//    int n;
//    int b;
//    cin >> n;
//    cin >> b;
//    DecToAny(n,b);
////    int res = DecToBinary(n);
////    cout << res << endl;
//
//}


//#include<iostream>
//using namespace std;
//
//int DecToAny(int n, int b){
//    if(n>0)
//    {
//        int r;
//        r=n%b;
//        n/=b;
//        DecToAny(n,b);
//        cout<<r;
//    }
//
//
//}
//int main(){
//    int n;
//    int b;
//    cin >> n;
//    cin >> b;
//    DecToAny(n,b);
////    int res = DecToBinary(n);
////    cout << res << endl;
//
//}
//

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//
//int AnyToDec(int n, int b){
//    int sum=0,m=0;
//    while(n!=0)
//    {
//        int r,p;
//        r=n%10;
//        n/=10;
//        p=r*pow(b,m);
//        m++;
//        sum+=p;
//    }
//    return sum;
//
//}
//int main(){
//    int n;
//    int b;
//    cin >> n;
//    cin >> b;
//    cout<<AnyToDec(n,b);
//    return 0;
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int DecToAny(int n, int b){
//    if(n>0)
//    {
//        int r;
//        r=n%b;
//        n/=b;
//        DecToAny(n,b);
//        cout<<r;
//    }
//
//}
//
//int AnyToDec(int n, int b){
//    int sum=0,m=0;
//    while(n!=0)
//    {
//        int r,p;
//        r=n%10;
//        n/=10;
//        p=r*pow(b,m);
//        m++;
//        sum+=p;
//    }
//    return sum;
//
//}
//int main(){
//    int n;
//    int b1,b2,dec;
//    cin >> n;
//    cin >> b1>>b2;
//    dec=AnyToDec(n,b1);
//    DecToAny(dec,b2);
//    return 0;
//}

#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {

    int mul=1,value,res,carry=0;

    while(n1>0||n2>0||carry>0)
    {
        int sum=0;
        int r1,r2,exr=0;
        r1=n1%10;
        n1/=10;
        r2=n2%10;
        n2/=10;
        sum=r1+r2+carry;
        carry=sum/b;
        value=sum%b;
        res=mul*value;
        mul*=10;
    }
    return res;
}


int main() {
    int b, n1, n2,result;
    cin >> b >> n1 >> n2;
    result=getSum(b, n1, n2);
    cout<<result;
    return 0;
}






