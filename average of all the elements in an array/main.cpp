#include <iostream>

using namespace std;

int main()
{
    int r,c;
    float n,sum=0.0,avg;
    cout<<"enter the number of row=";
    cin>>r;
    cout<<"enter the number of column=";
    cin>>c;
    float A[r][c];
    cout<<"enter the elements: \n";
    n=r*c;
    for(auto &x:A)
    {
        for(auto &y:x)
//            while reading inputs, '&' is must in both for loops(inner(y) and outer(x))
        {
            cin>>y;
//            sum+=y;
        }
    }
    for(auto &x:A)
    {
        for (auto y:x)
        {
            sum+=y;
            cout<<y<<" ";
        }
        cout<<endl;
    }
    avg=(sum/n);
    cout<<"AVERAGE = "<<avg;
    return 0;
}
