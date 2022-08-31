//
//#include<iostream>
//
//using namespace std;
//
//int getSum(int b, int n1, int n2,int carry) {
//    int value;
//    //cout<<"m1 = "<<m1<<endl<<"n1 = "<<n1<<endl<<"m2 = "<<m2<<endl<<"n2 = "<<n2<<endl;
//    if(n1>0||n2>0||carry>0)
//    {
//
//        int sum=0;
//        int r1,r2;
//        r1=n1%10;
//        n1/=10;
//        r2=n2%10;
//        n2/=10;
//        //cout<<"carry = "<<carry<<endl;
//        sum=r1+r2+carry;
//        if(sum>=b)
//        {
//            carry=1;
//        }
//        else if(sum<b)
//        {
//            carry=0;
//        }
//        value=sum%b;
//        //cout<<r1<<" + "<<r2<<" = "<<sum<<endl<<sum<<" % "<<b<<" = "<<value<<endl;
//        getSum(b, n1, n2,carry);
//        cout<<value;
//    }
//}
//
//int main() {
//    int b, n1, n2,carry=0;
//    cin >> b >> n1 >> n2;
//    getSum(b, n1, n2,carry);
//    return 0;
//}



//#include<iostream>
//
//using namespace std;
//
//int getSub(int b, int n1, int n2,int carry) {
//    int value;
//    if(n1>0||n2>0)
//    {
//
//        int sub=0;
//        int r1,r2,borrow;
//        r1=n1%10;
//        n1/=10;
//        r2=n2%10;
//        n2/=10;
//        r2+=carry;
//        if(r2>=r1)
//        {
//            borrow=0;
//            carry=0;
//        }
//        else if(r2<r1)
//        {
//            borrow=b;
//            carry=-1;
//        }
//        sub=(r2+borrow)-r1;
//        getSub(b, n1, n2,carry);
//        if(n1==0&&sub==0)
//        {
//
//        }
//        else
//        {
//            cout<<sub;
//        }
//    }
//}
//
//int main() {
//    int b, n1, n2,carry=0;
//    cin >> b >> n1 >> n2;
//    getSub(b, n1, n2,carry);
//    return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int getSub(int b, int n1, int n2,int carry) {
//    int value;
//    if(n1>0||n2>0)
//    {
//
//        int sub=0;
//        int r1,r2,borrow;
//        r1=n1%10;
//        n1/=10;
//        r2=n2%10;
//        n2/=10;
//        r2+=carry;
//        if(r2>=r1)
//        {
//            borrow=0;
//            carry=0;
//        }
//        else if(r2<r1)
//        {
//            borrow=b;
//            carry=-1;
//        }
//        sub=(r2+borrow)-r1;
//        getSub(b, n1, n2,carry);
//        if(n1==0&&sub==0)
//        {
//
//        }
//        else
//        {
//            cout<<sub;
//        }
//    }
//}
//
//int main() {
//    int b, n1, n2,carry=0;
//    cin >> b >> n1 >> n2;
//    getSub(b, n1, n2,carry);
//    return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int getpwd(int b, int n1, int d2) {
//    int rv=0,p=1,c=0;
//    while(n1>0||c>0)
//    {
//        int d1 = n1 % 10;
//        n1 = n1 / 10;
//        int d = d1 * d2 + c;
//        c = d / b;
//        d = d % b;
//        rv += d * p;
//        p = p * 10;
//    }
//    return rv;
//}
//
//int getsum(int b, int n1, int n2) {
//
//    int c=0,rv=0,p=1,sum=0;
//    while(n1>0||n2>0||c>0)
//    {
//        int d1=n1%10;
//        n1/=10;
//        int d2=n2%10;
//        n2/=10;
//        sum=d1+d2+c;
//        if(sum>=b)
//        {
//            c=1;
//        }
//        else if(sum<b)
//        {
//            c=0;
//        }
//        sum = sum % b;
//        rv += sum * p;
//        p = p * 10;
//    }
//    return rv;
//}
//
//int getproduct(int b, int n1, int n2)
//{
//    int rv=0,carry=0,p=1;
//    while(n2>0)
//    {
//        int d2=n2%10;
//        n2=n2/10;
//        int pwd = getpwd(b,n1,d2); // 17402
//        //cout<<rv<<endl;
//        rv=getsum(b,rv,p*pwd); // rv = 10670
//        p = p * 10;
//    }
//    return rv;
//}
//int main() {
//    int b, n1, n2;
//    cin >> b >> n1 >> n2;
//    int d = getproduct(b, n1, n2);
//    cout<<d;
//    return 0;
//}
//

//#include<iostream>
//using namespace std;
//
//int main(){
//    int siz,maxim,minim,temp;
//    cin>>siz;
//    int arr[siz];
//    for(int i=0;i<siz;i++)
//    {
//        cin>>arr[i];
//    }
//    for(int i=0;i<siz;i++)
//    {
//        for(int j=i+1;j<siz;j++)
//        {
//            if(arr[j]<arr[i])
//            {
//                temp=arr[i];
//                arr[i]=arr[j];
//                arr[j]=temp;
//            }
//        }
//    }
//    cout<<arr[siz-1]-arr[0];
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main(){
//    int siz,temp,n;
//    cin>>siz;
//    int arr[siz],ordarr[siz];
//    for(int i=0;i<siz;i++)
//    {
//        cin>>arr[i];
//    }
//    for(int i=0;i<siz;i++)
//    {
//        ordarr[i]=arr[i];
//    }
//    for(int i=0;i<siz;i++)
//    {
//        for(int j=i+1;j<siz;j++)
//        {
//            if(ordarr[j]<ordarr[i])
//            {
//                temp=ordarr[i];
//                ordarr[i]=ordarr[j];
//                ordarr[j]=temp;
//            }
//        }
//    }
//    n=ordarr[siz-1];
//    for(int i=n;i>=1;i--)
//    {
//        for(int j=0;j<siz;j++)
//        {
//            if (arr[j]>=i)
//            {
//                cout<<"*\t";
//            }
//            else{
//                cout<<"\t";
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main(){
//    int siz1,diff;
//    cin>>siz1;
//    int arr1[siz1];
//    for(int i=0;i<siz1;i++)
//    {
//        cin>>arr1[i];
//    }
//    int siz2;
//    cin>>siz2;
//    int arr2[siz2];
//    for(int i=0;i<siz2;i++)
//    {
//        cin>>arr2[i];
//    }
//    if(siz2>siz1)
//    {
//        diff=siz2-siz1;
//        cout<<"diff="<<diff<<endl;
//        for(int i=0;i<diff;i++)
//        {
//            for(int j=siz1; j>=0; j--)
//                {arr1[j] = arr1[j-1];}
//            arr1[i] = 0;
//        }
//        for(int i=0;i<siz1+diff;i++)
//        {
//            cout<<arr1[i]+arr2[i]<<endl;
//        }
//    }
//    else if(siz1>siz2)
//    {
//        diff=siz1-siz2;
//        cout<<"diff="<<diff<<endl;
//        for(int i=0;i<diff;i++)
//        {
//            for(int j=siz2;j>=0;j--)
//            {
//                arr2[j]=arr2[j-1];
//            }
//            arr2[i]=0;
//        }
//        for(int i=0;i<siz2+diff;i++)
//        {
//            cout<<arr1[i]+arr2[i]<<endl;
//        }
//
//    }
//    else
//    {
//        for(int i=0;i<siz2;i++)
//        {
//            cout<<arr1[i]+arr2[i]<<endl;
//        }
//    }
//        return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main(){
//    int n1,n2,c=0;
//    cin>>n1;
//    int arr1[n1]{};
//    for(int i=0;i<n1;i++)
//    {
//        cin>>arr1[i];
//    }
//    cin>>n2;
//    int arr2[n2]{};
//    for(int i=0;i<n2;i++)
//    {
//        cin>>arr2[i];
//    }
//    int n3;
//    if(n1>=n2)
//    {n3=n1;}
//    else if(n2>n1)
//    {n3=n2;}
//    int sum[n3]{};
//    //int n3=sizeof(sum);
//    //cout<<sizeof(sum)<<endl;
//    int i=n1-1,j=n2-1,k=n3-1;
//    while(i>=0||j>=0)
//    {
//        int d=c;
//        if(i>=0)
//        {
//            d+=arr1[i];
//        }
//        if(j>=0)
//        {
//            d+=arr2[j];
//        }
//        c=d/10;
//        d=d%10;
//        sum[k] = d;
//        i--;
//        j--;
//        k--;
//    }
//    if (c > 0) {
//      //cout<<c;
//    }
//    for(int i=0;i<n3;i++)
//    {
//        cout<<sum[i]<<endl;
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main(){
//    int n1, n2,borrow,c=0;
//    cin>>n1;
//    int a1[n1]{};
//    for(int i = 0 ; i < n1; i++){
//        cin>>a1[i];
//    }
//    cin>>n2;
//    int a2[n2]{};
//    for(int i = 0 ; i < n2; i++){
//        cin>>a2[i];
//    }
//    int n3;
//    if(n1>=n2)
//    {n3=n1;}
//    else if(n2>n1)
//    {n3=n2;}
//    int diff[n3]={};
//    int i=n1-1,j=n2-1,k=n3-1;
//    while(k>=0)
//    {
//        int d=0,a1v;
//        if(i>=0){
//            a1v=a1[i];
//        }
//        else
//        {
//            a1v=0;
//        }
//        if (a2[j] + c >= a1v) {
//            d = (a2[j] + c) - a1v;
//            //cout<<a2[j]<<" + "<<c<<" - "<<a1v<<" = "<<d<<endl;
//            c = 0;
//        }
//        else
//        {
//            d = (a2[j] + 10 + c) - a1v;
//            //cout<<a2[j]<<" + 10 + "<<c<<" - "<<a1v<<" = "<<d<<endl;
//            c = -1;
//        }
//        diff[k] = d;
//        i--;
//        j--;
//        k--;
//    }
////    for(int i=0;i<n3;i++)
////    {
////        cout<<diff[i]<<endl;
////    }
//
//    int idx = 0;
//    while (idx < n3 && diff[idx] == 0) {
//      idx++;
//    }
//
//    while (idx < n3) {
//      cout<<diff[idx++]<<endl;
//    }
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//int *reverse(int* arr, int n){
//    int i=n-1,j=0;
//    int *p=new int[n];
//    while(i>=0)
//    {
//        p[j]=arr[i];
//        i--;
//        j++;
//    }
//    return p;
//}
//
//int main(){
//    int n;
//    cin>>n;
//
//    int arr[n]{};
//    for(int i = 0 ; i < n; i++){
//        cin>>arr[i];
//    }
//    int *q = reverse(arr,n);
//    for(int i = 0 ; i < n; i++){
//        cout<<q[i]<<" ";
//    }
//}




//#include <iostream>
//using namespace std;
//
//
//void rotatearr(long long int arr[], long long int n)
//{
//    long long int x=arr[n-1],i=0;
//    for(i=n-1;i>0;i--)
//    {
//        arr[i]=arr[i-1];
//    }
//    arr[0]=x;
//}
//void lrotatearr(long long int arr[], long long int n)
//{
//    long long int x=arr[0],i=0;
//    for(i=0;i<n;i++)
//    {
//        arr[i]=arr[i+1];
//    }
//    arr[n-1]=x;
//}
//int main(){
//    long long int n;
//    long long int d,a;
//    cin>>n;
//    long long int arr[n]={};
//    for(long long int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    cin>>d;
//    //cout<<"d="<<d<<endl;
//    a=d;
//    if (d>=0)
//    {
//        for(long long int i=0;i<a;i++)
//        {
//            rotatearr(arr,n);
//        }
//    }
//    else if(d<0)
//    {
//        for(long long int i=0;i<-a;i++)
//        {
//            lrotatearr(arr,n);
//        }
//    }
//
//    for(long long int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}


#include <stdio.h>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
     unsigned long int n;
  cin>>n;
  vector <int> arr;
  for(int i=0;i<n;i++){
     int x;
     cin>>x;
    arr.push_back(x);}

 int x;
  cin>>x;
 if(x==0){
   for(int x:arr)
   cout<<x<<" ";
     return 0;
 }



  else if(x>0){
    for(int j=n-x;j<n;j++){
      cout<<arr[j]<<" ";


  }
  for(int i=0;i<n-x;i++)
  cout<<arr[i]<<" ";






}
else {
    x=abs(x);
    for( int i=x;i<n;i++)
    cout<<arr[i]<<" ";
    for(int i=0;i<x;i++)
    cout<<arr[i]<<" ";


  }


}

