#include <iostream>

using namespace std;

int main()
{
    string str = "super mapla";
    string str2 = "chennaiyin fc";
    str.replace(8,3,"chan"); // "pla"(3) --> "chan"

    cout <<str<< endl;
    str.push_back('s');
    cout <<str<< endl;
    str.pop_back(); //like  backspace
    cout <<str<< endl;
    str.swap(str2);
    cout <<str<< endl;
    return 0;
}
