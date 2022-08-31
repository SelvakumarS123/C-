#include <iostream>

using namespace std;

//int add(int a,int b)
//{
//    return a+b;
//}
//
//float add(float a,float b)
//{
//    return a+b;
//}
//int add(int a,int b)
//{
//    return a+b;
//}
//int add(int a,int b,int c=0)
//{
//    return a+b+c;
//}

int t=60;
template<class T>
T add(T a,T b, T c=0)
{
    return a+b+c;
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void swap(int &a,int &b) // pass by reference (inline)
{
    cout<<&a<<" "<<&b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int *returnpointer(int n)
{
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
    }
    return p;
}

int &returnref(int &s)
{
    return s;
}

int fun(int x)
{
    if(x>0)
    {
        cout<<x<<endl;
        fun(x-1);
    }
}

int afterfun(int x)
{
    if(x>0)
    {
        afterfun(x-1);
        cout<<x<<endl;
    }
    cout<<endl;
}

//int linearsearch(int arr[], int key)
//{
//    for(auto x:arr)
//    {
//        if(x==key)
//        {
//            cout<<x<<" found at index "<<endl;
//        }
//    }
//}

int main()
{
//    cout<<add(2,3)<<endl;
//    cout<<add(2,3,3)<<endl;
//    cout<<add(2.3f,3.2f,5.4f)<<endl;
//    //cout<<add(2,3,1)<<endl;
//    cout<<endl;
//
//    int x=10,y=20;
//    cout<<&x<<" "<<&y<<endl;
//    swap(&x,&y); // (pass by address)
//    swap(x,y); //(pass by ref)
//    cout<<x<<endl<<y<<endl;
//
//    int *p=returnpointer(10);
//     for(int i=0;i<10;i++)
//    {
//        cout<<p[i]<<" ";
//    }

    int t=10;
    cout<<returnref(t)<<endl;
    returnref(t)=25;
    cout<<t<<endl;
    cout<<::t<<endl;

    fun(5);
    afterfun(5);
//    int arr[]={1,2,3,4,5,6,7,9};
//    linearsearch(arr,9);

    int (*fp)(int);
    fp=fun;
    (*fp)(10);
    fp=afterfun;
    (*fp)(10);
    return 0;
}
