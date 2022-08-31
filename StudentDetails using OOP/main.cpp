#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int mathmark;
    int phymark;
    int chemark;
public:
    Student(int r,string name,int mathmark,int phymark,int chemark)
    {
        roll=r;
        this->name=name;
        this->mathmark=mathmark;
        this->phymark=phymark;
        this->chemark=chemark;
    }

    int total();
    char grade();
    ~Student();
};

int main()
{
    int roll,m,p,c;
    string name;
    cout<<"Enter roll number: "<<endl;
    cin>>roll;
    cout<<"Enter student name: "<<endl;
    cin>>name;
    cout<<"Enter math,physics & chemistry marks: "<<endl;
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout<<"Total marks = "<<s.total()<<endl;
    cout<<"Grade = "<<s.grade();
    return 0;
}

int Student::total()
{
    return mathmark+phymark+chemark;
}

char Student::grade()
{
    float avg=total()/3;
    if(avg>=60)
    {
        return 'A';
    }
    else if(avg>=30 && avg<60)
    {
        return 'B';
    }
    else{return 'C';}
}
Student::~Student()
{

}
