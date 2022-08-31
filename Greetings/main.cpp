#include <iostream>

using namespace std;

int main()
{
  string name;
    cout<<"May i know your name"<<endl;
//    cin>>name;
    getline(cin,name);
    cout<<"Hello Mr."<<name;
}
