//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n,m,r,rev=0;
//    cout << "enter a number" << endl;
//    cin>>n;
//    m=n;
//    while(n>0)
//    {
//        r=n%10;
//        n/=10;
//        rev=rev*10+r;
////        cout<<rev<<endl;
//    }
//    cout << endl<< endl<<"reverse = "<<rev<< endl;
//    if(rev==m){cout<<"the number is a palindrome";}
//    else{cout<<"the number is 'not' a palindrome";}
//    return 0;
//}


#include <iostream>
using namespace std;

int main(int argc, char **argv){
    unsigned long int n,r;
    cin >> n;
    while(n!=0)
    {
        r=n%10;
        n/=10;
        cout<<r<<endl;
    }

    return 0;

}
//#include <iostream>
//using namespace std;
//
//int main(int argc, char **argv){
//    int n;
//    cin >> n;
//
//    int power = 1;
//    int temp = n;
//    while (temp >= 10){
//        temp /= 10;
//        power *= 10;
//    }
//
//    temp = n;
//    while (power != 0){
//        int digit = temp / power;
//        cout << (digit) << endl;
//
//        temp = temp % power;
//        power = power / 10;
//    }
//}
