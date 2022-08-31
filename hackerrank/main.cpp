#include <iostream>

using namespace std;
int main() {
    int a,n,i,j;
    cin>>a>>n;
    for(a;a<=n;a++)
    {
        if(a<=9)
        {
            if(n<9)
            {
                for(a;a<=n;a++)
                {
                    switch(a)
                    {
                    case 0:cout<<"zero"<<endl;
                    break;
                    case 1:cout<<"one"<<endl;
                    break;
                    case 2:cout<<"two"<<endl;
                    break;
                    case 3:cout<<"three"<<endl;
                    break;
                    case 4:cout<<"four"<<endl;
                    break;
                    case 5:cout<<"five"<<endl;
                    break;
                    case 6:cout<<"six"<<endl;
                    break;
                    case 7:cout<<"seven"<<endl;
                    break;
                    case 8:cout<<"eight"<<endl;
                    break;
                    case 9:cout<<"nine"<<endl;
                    break;
                    }
                }

            }
            else
            {
                for(a;a<=9;a++)
                {
                    switch(a)
                    {
                    case 0:cout<<"zero"<<endl;
                    break;
                    case 1:cout<<"one"<<endl;
                    break;
                    case 2:cout<<"two"<<endl;
                    break;
                    case 3:cout<<"three"<<endl;
                    break;
                    case 4:cout<<"four"<<endl;
                    break;
                    case 5:cout<<"five"<<endl;
                    break;
                    case 6:cout<<"six"<<endl;
                    break;
                    case 7:cout<<"seven"<<endl;
                    break;
                    case 8:cout<<"eight"<<endl;
                    break;
                    case 9:cout<<"nine"<<endl;
                    break;
                    }
                }
            }
        }
        if(a>9)
        {
            for(a;a<=n;a++)
            {
                if(a%2==0)
                {
                    cout<<"even"<<endl;
                }
                else if(a%2==1)
                {
                    cout<<"odd"<<endl;
                }
            }
        }
    }

    return 0;
}
