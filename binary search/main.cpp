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

using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int l,h,mid,key;
    cin>>key;
    l=0;
    h=9;

    while(l<=h)
    {
        mid = 0;
        mid=(l+h)/2;
        if(arr[mid]==key)
        {
             cout<<mid;
             break;
        }
        else if (arr[mid]>key)
        {
          h=mid-1;
        }
        else
        {
              l=mid+1;
        }
    }

    if(l>h)
    {
        cout<<"key not found. search is unsuccessful";
    }
    return 0;
}


