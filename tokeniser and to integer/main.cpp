//#include <iostream>
//#include <cstring>

//using namespace std;

//int main()
//{
//    // string to long
//    char s1[10]="237";
//    char s2[10]="53.76";
//    long int x = strtol(s1,NULL,10); // NULL--> \0 , 10--> base(decimal)
//    float y = strtof(s2,NULL);
//    cout << x <<endl<< y << endl;
//    int z = x+y; // becoz these ( x and y) are now int and float values
//    cout<<z<<endl;
//
////    tokenising (key value pair --> dictionary) #lol😅😑😁😂
////    strtok(str1,"=;")
//
//    char dict[]="x=10;y=20;z=30;";
//    char *token;
////
////    token = strtok(dict,"");
////    cout<<token<<endl;
////
////
////    token = strtok(dict,";");
////    cout<<token<<endl;
////    token = strtok(NULL,";");
////    cout<<token<<endl;
////    token = strtok(NULL,";");
////    cout<<token<<endl;
////
////
////    token = strtok(dict,"=");
////    cout<<token<<endl;
////    token = strtok(NULL,"=");
////    cout<<token<<endl;
////    token = strtok(NULL,"=");
////    cout<<token<<endl;
////    token = strtok(NULL,"=");
////    cout<<token<<endl;
//
////    token = strtok(dict,"=;");
////    cout<<token<<endl;
////    token = strtok(NULL,"=;");
////    cout<<token<<endl;
////    token = strtok(NULL,"=;");
////    cout<<token<<endl;
////    token = strtok(NULL,"=;");
////    cout<<token<<endl;
////    token = strtok(NULL,"=;");
////    cout<<token<<endl;
////    token = strtok(NULL,"=;");
////    cout<<token<<endl;
//
//    token = strtok(dict,"=;");
//
//    while (token !=NULL)
//        {
//            cout<<token<<endl;
//            token = strtok(NULL,"=;");
//        }
//
//
//
////strtok()
////It is used for tokenising a string
////In first call we pass a string from second call we pass NULL, it will
////use same string given in first call.
////First call
////strtok(“hello:how:are:you”,”:”); this is the first call
////• In first call it will return first token “hello” as a string
////• char *t; is used for taking tokens.
////• In first call, it will store the string internally.
////Second call
////strtok(NULL,”:”); this is the second call.
////• NULL means, it will use the same string given in first call
////• From second call onwards it will give second token onwards.
////• Same call is repeated with NULL to get all the tokens.
//
//
//    return 0;
//}

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[100];
    cin.getline(s,100);
    char *token;
    token = strtok(s,",");
while(token !=NULL)
{
    cout<<token<<endl;
    token = strtok(NULL,",");
}
    return 0;
}
