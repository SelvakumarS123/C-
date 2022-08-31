#include <iostream>

using namespace std;

int main()
{
    int n=1;
    for(int i=0;i<4;i++)
    {
        cout<<"[";
        for(int j=0;j<4;j++)
        {
          if (n>9)
          {
              cout<<n<<"  ";
              n++;
          }
          else if(n<=9)
          {
              cout<<n<<"   ";
              n++;
          }
        }
        cout<<"]"<<endl;
        cout<<endl;
    }
    return 0;
}
