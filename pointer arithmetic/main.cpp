#include <iostream>

using namespace std;

int main()
{
    //once the size of an array is declared,the size can't be modified,
    //when we use pointers this can be solved to some extent
    int *a=new int[10];
    //if 10 is not enough,
    delete []a;
    //now again we don't have to declare 'a', we are just changing it's(a's) pointing direction
    a=new int[20];
    //a new bigger array with same name(a) is created.

    int A[5]{4,6,2,9,1};
    cout<<A<<"-->"<<*A<<endl;
    int *p=A;
    cout<<*p<<"-->";
    cout<<p<<endl;
    p++;
    cout<<*p<<"-->";
    cout<<p<<endl;
    cout<<*(p+2)<<endl;
    cout<<p<<endl;
    p=p+2;
    cout<<*p<<"-->";
    cout<<p<<endl;
    p--;
    cout<<*p<<"-->";
    cout<<p<<endl;
    p=p-2;
    cout<<*p<<"-->";
    cout<<p<<endl;
    cout<<endl;
    cout<<endl;
    //lets see something interesting
    for(int i=0;i<5;i++)
    {
        cout<<i[A]<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<(A+i)<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(A+i)<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<(p+i)<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }

    cout<<endl;
    cout<<endl;
    int B[8]={8,5,3,7,4,9,1,10};
    int s=0;
    for (int i=0;i<8;i++)
    {
        if(B[i]==3)
        s=i;
    }
    int *m=&B[s];
    int *n=&B[5];
    int d;
    d=n-m;
    // - sign will show which pointer comes first
    cout<<d<<endl;
    return 0;
}
