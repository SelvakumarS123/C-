#include <iostream>

using namespace std;

int main()

{
    int age;
    cout<<"enter ur age bruh"<<endl;
    cin>>age;
    if (age>=12&&age<=30)

        cout<<"Eligible"<<endl;

    if(age<12 || age>30)

    cout << "Not eligible" << endl;
//    if you write only a single statement inside if, then flower brackets are not necessary
    return 0;
}


