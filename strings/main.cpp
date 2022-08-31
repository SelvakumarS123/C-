#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //1) char array
    char s[10]="hello";
    char s1[]={'h','e','l','l','o','\0'};
    char s2[]={65,66,67,68,'E','F','G','\0','I','J','K'};
    //can also use '0' instead of '\0' , it does the job.
    char *str="hellolo";
    cout<<"length = "<<strlen(str)<<endl;
    cout<<s<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<str<<endl;

    //  '\0' ->string terminator
    //  '\0' ->value=null

    //2) class string->prefered
    string str1="hello! ";
    cout<<str1;
    cout<<"enter ur name"<<endl;
    char name[10];
    cin.get(name,20); // 1 -> this get will not read enter key at the end. enter key will be taken as input by the following .get function, #LOL :D
    cout<<"welcome "<<name<<endl;
    cin.ignore(); // 3-> use this to ignore any left off inputs from the previous func.
    cout<<"enter ur nick-name"<<endl;
    char name1[10];
    cin.get(name1,20); // 2 -> the enter key pressed in previous .get function is fed as input for this get function
    cout<<"vanakkam da mapla "<<name1;

    // or use .getline function :)


//    cout<<"enter ur name"<<endl;
//    char name[10];
//    cin.getline(name,20); // this will read the whole line("also the enter key")
//    cout<<"welcome "<<name<<endl;
//    cout<<"enter ur nick-name"<<endl;
//    char name1[10];
//    cin.getline(name1,20);
//    cout<<"vanakkam da mapla "<<name1;
    return 0;
}
