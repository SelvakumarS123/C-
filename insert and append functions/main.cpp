#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s="hello";
    string t ="! world";
    cout<<s.capacity()<<endl;
//    s.append(" world");
    cout << s + t << endl;
    cout<<s.capacity()<<endl;
    s.append("hey guys what up");
    cout<<s.capacity()<<endl;
    cout<<s.length()<<endl<<endl<<endl;

    // inserting

    string s1="lion sva";
    cout<<s1<<endl;
    s1.insert(2,"g");
    cout<<s1<<endl;
    s1.insert(7,"elephant",2);
    cout<<s1<<endl;
    s.append(s1);
    cout << s << endl;
    return 0;
}
