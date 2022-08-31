#include <iostream>

using namespace std;

int main()
{
    int arr[2][3]={{2,4,6},{3,5,7}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<sizeof arr<<endl; //6 * 4 bytes= 24bytes
    cout<<endl;

//if you use for each loop to access a 2-d array, then reference(&)is must
    for(auto &x:arr)

// here x represents a row of a 2D array. We cant declare it so take auto reference.

// note that in above code x is not declared as an int, bcoz x takes the first row elements of arr.
// so better declare it as auto and use reference to access(&x) and modify(&y) the elements of that row

//when we use auto,
//        1)*x* variable will be taken as type row of *arr*(for each iteration of *x* values of one row of *arr* is taken)
//        2)*y* variable will be taken as type column of *x*(for each iteration of *y* one element of row(x) is taken)

    {
        for(auto y:x)
//    this *y* will take values from *x*(rows of arr)
//    if you add reference here too, then the arr values will be modified permanently
        {
            y++;
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;cout<<endl;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;cout<<endl;

    cout<<"using reference:"<<endl;
    cout<<endl;

    for(auto &x:arr)
    {
        for(auto &y:x)
        {
            y++;
        }
    }

//    now values of arr is modified permanently...using below code imma check it out

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
