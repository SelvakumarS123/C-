#include <iostream>

using namespace std;

int main()
{
//    area of circle = (22/7)*r*r
    float r,area, correct_area;
    cout<<"Enter radius"<<endl;
    cin>>r;
    area = 22/7 * r * r;
    cout << area << endl;
//    this gives 147, which is wrong because 22/7 is treated as int so 22/7 is taken as 3, where as in float, the value of 22/7 is > 3
    correct_area= (float)22/7 * r* r;
    cout <<"Correct Area is "<< correct_area << endl;
    return 0;

}
