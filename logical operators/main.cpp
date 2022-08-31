#include <iostream>

using namespace std;

int main()

{
    int m,n;
    cout<<"enter m and n"<<endl;
    cin>>m>>n;
    if ((m>0)&&(n>0))
    {
        cout<<"'&&' is true"<<endl;
    }
    if ((m>0)||(n>0))
    {
        cout<<"'||' is true"<<endl;
    }
    else
    {

        m=~m;
        n=~n;
        cout<<"'~' is "<<m<<","<<n<<endl;

    }
    return 0;
}
