#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k,r,nofd=0,m,nof=10,mfn=0,p,q;
    cin>>n>>k;
    m=n;
    while(m>0)
    {
        r=m%10;
        m/=10;
        nofd++;
    }
    for(int i=0;i<nofd-2;i++)
    {
        nof*=10;
    }

    if(k>0)
    {
        while(k>0)
        {
        r=n%10;
        n=n/10;
        mfn=r*nof+n;
        n=mfn;
        cout<<mfn<<endl;
        k--;
        }

    }
    else if(k<0)
    {
        while(k<0)
        {
            p=n/nof;

            k++;
        }
    }

}
