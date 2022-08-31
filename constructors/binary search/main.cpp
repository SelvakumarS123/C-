//#include <iostream>
//
//using namespace std;
////linear search--> takes O(n) time(slow)
////binary search--> takes O(logn) time (faster)
//
//int main()
//{
////    int n;
////    cout<<"enter the size of array"<<endl;
////    cin>>n;
////    int arr[n];
////    cout<<"enter array elements"<<endl;
////    for(int i=0;i<n;i++)
////    {
////        cin>>arr[i];
////    }
//
////    learn sorting biatch :(
//
//    int A[10]={6,7,15,17,20,22,25,29,30,33},l=0,h=9,mid,key;
//    cout<<"enter key "<<endl;
//    cin>>key;
//    while(l<=h)
//    {
//        mid=0;
//        mid=(l+h)/2;
//        if (A[mid]==key)
//        {
//            cout<<A[mid];
//            cout<<" found at index '"<<mid<<"'";
//            break;
//        }
//        else if(A[mid]>key)
//        {
//            h=mid-1;
//        }
//        else
//        {
//            l=mid+1;
//        }
//    }
//    if (l>h)
//    {
//        cout<<"key not found. search is unsuccessful";
//    }
//    return 0;
//}
#include <iostream>
#include <string.h>
using namespace std;

template <class T>
class spl_ar
{
public:
    T arr[100];
    int size;
    void create()
    {
        cout << "\nEnter the size";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cout << "\nenter the element :";
            cin >> arr[i];
        }
    }
    void search(T var)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == var)
            {
                cout << "\nFound it " << arr[i] << endl;
            }
        }
    }
};

int main()
{
    spl_ar<int> objI;
    spl_ar<char> objC;
    objI.create();
    objI.search(3);
    objC.create();
    objC.search('c');
}

