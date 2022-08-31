#include <iostream>

using namespace std;
class Shape{

protected:
    int width;
    int height;
public:

    void setwidth(int w){width = w;}
    void setheight(int h){height = h;}

};

class Rectangle : public Shape{

public:
    int getarea(){return (width*height);}
};

int main()
{
    Rectangle Rect;
    Rect.setwidth(6);
    Rect.setheight(6);

    cout <<Rect.getarea() << endl;
    return 0;
}
