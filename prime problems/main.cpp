//#include <iostream>
//using namespace std;
//int main(){
//    int low, high,c;
//    cin >> low >> high;
//
//    for(int i=low;i<=high;i++)
//    {
//        c=0;
//        for(int j=1;j<=i;j++)
//        {
//
//            if(i%j==0)
//            {
//                c++;
//            }
//        }
//
//    if(c==2)
//    {
//        cout<<i<<endl;
//    }
//    else if(i==1)
//    {
//        cout<<i<<endl;
//    }
//    }
//    return 0;
//}

#include <iostream>
using namespace std;
int main(){
    int low;
    cin >> low;

    int high;
    cin >> high;

    for (int num = low; num <= high; num++){
        int div = 2;
        while (div * div <= num){
            if (num % div == 0){
                break;
            }
            div++;
        }

        if (div * div > num){
            cout << (num) << endl;
        }
    }

    return 0;
}
