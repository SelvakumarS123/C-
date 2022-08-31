#include <iostream>

using namespace std;

int main()
{
    int r1,r2,c1,c2;
    cout<<"enter the number of row of 1st matrix=";
    cin>>r1;
    cout<<"enter the number of column of 1st matrix=";
    cin>>c1;
    int A[r1][c1];
    cout<<"enter the number of row of 2nd matrix=";
    cin>>r2;
    cout<<"enter the number of column of 2nd matrix=";
    cin>>c2;
    int B[r2][c2];
    int mul[c1][r2];
    cout<<"enter the first matrix element=\n";
    for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c1;j++)
    {
    cin>>A[i][j];
    }
    }
    for (int i=0; i<r1; i++)
    {
        for (int j=0; j<c1; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter the second matrix element=\n";
    for(int i=0;i<r2;i++)
    {
    for(int j=0;j<c2;j++)
    {
    cin>>B[i][j];
    }
    }
    for (int i=0; i<r2; i++)
    {
        for (int j=0; j<c2; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
//    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    int B[3][3]={{7,8,9},{4,5,6},{1,2,3}};
//    int mul[3][3];
//    int r=3, c=3;

    for (int i=0;i<r1;i++) //iterates upto number of rows of A
    {
        for(int j=0;j<c2;j++)//iterates upto number of columns of B
        {
            mul[i][j]=0;
            for(int k=0;k<c1;k++) //iterates upto number of columns of A
            {
                mul[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

//EXAMPLE MATRIX OF ORDER--> (2*3) and (3*2)--> i<2(r1),j<2(c2),k<3(c1)-->2*2
//the loop:
//    i=0(T)-->j==0(T)-->k=0,1,2
//                               -->j=1(T)-->k=0,1,2-->j=2(F)
//                                                           -->i=1(T)-->j=0(T)-->k=0,1,2
//                                                                                        -->j=1(T)-->k=0,1,2-->j=2(F)
//                                                                                                                     -->i=2(F)-->end


    for (int i=0; i<r1; i++)
    {
        for (int j=0; j<c2; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
