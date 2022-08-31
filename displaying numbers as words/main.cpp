#include <iostream>

using namespace std;

int main()
{
    int n,m,r,rev,rev1=0,rev2=0;
    cout << "enter a number" << endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
//        cout<<r<<endl;
//        cout<<rev<<endl;
    }
//    cout<<rev<<endl;
    while(rev>0)
    {
        rev1=rev%10;
        rev/=10;
        rev2=rev2*10+rev1;
        switch(rev1)
        {
                    case 0:cout<<"zero ";
                    break;
                    case 1:cout<<"one ";
                    break;
                    case 2:cout<<"two ";
                    break;
                    case 3:cout<<"three ";
                    break;
                    case 4:cout<<"four ";
                    break;
                    case 5:cout<<"five ";
                    break;
                    case 6:cout<<"six ";
                    break;
                    case 7:cout<<"seven ";
                    break;
                    case 8:cout<<"eight ";
                    break;
                    case 9:cout<<"nine "<<endl;
                    break;
                    }

        }
        cout<<rev2<<endl;


    return 0;
}
