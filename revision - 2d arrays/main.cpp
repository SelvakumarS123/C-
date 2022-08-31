#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int A[2][4];
    int B[2][4]={{8,9,6,7},{1,2,3,4}};
    int C[2][4];
//    for(int i=0;i<2;i++)
//    {
//        for(int j=0;j<4;j++)
//        {
//            C[i][j]=A[i][j] + B[i][j];
//            cout<<C[i][j]<<" ";
//        }
//        cout<<endl<<"\n";
//    }
////cout<<endl<<endl;
////        for(int i=0;i<2;i++)
////    {
////        for(int j=0;j<4;j++)
////        {
////            cout<<C[i][j]<<" ";
////        }
////        cout<<endl<<"\n";
////    }
//
//    for(auto& x:A)
//    {
//        for(auto& y:x)
//        {
//            cin>>y;
//        }
//        //cout<<"hi"<<endl;
//    }
//    for(auto& x:A)
//    {
//        for(auto& y:x)
//        {
//            //y+=1;
//            cout<<y<<" ";
//        }
//        cout<<endl;
//    }
//
//    for(int i=0;i<2;i++)
//    {
//        for(int j=0;j<4;j++)
//        {
//            C[i][j]=A[i][j] + B[i][j];
//            cout<<C[i][j]<<" ";
//        }
//        cout<<endl<<"\n";
//    }

//    int x=10;
//    int *p=&x;
//    cout<<x<<endl;
//    cout<<&x<<endl;
//    cout<<*p<<endl;//dereferencing
//    cout<<p<<endl;// address of x
//    cout<<&p<<endl;
//
//    int size1;
//    cin>>size1;
//    int F[size1];
//    cout<<sizeof F<<endl;
//
//
//    int *q=new int[20];
//    delete []q;
//    q=new int[40];
//
//    int l=20;
//    int &m=l;
//    cout<<l<<endl;
//    m++;
//    l++;
//    cout<<l<<endl;
//    cout<<&l<<endl<<&m<<endl;
//
//    char str[] = "Hello";
//    char strarr[10]="Hello";
//    char strarr1[10]={'H','e','l','l','o','\0','h','i'};
//    char strarr2[]={65,66,67,68,0,69,70};
//    char *s="Hello";
//    cout<<str<<endl;
//    cout<<strarr<<endl;
//    cout<<strarr1<<endl;
//    cout<<strarr2<<endl;
//    cout<<s<<endl;
//    string st = "Hello";
//
//
//    char h[20];
//    char h2[20];
//    char h3[20];
//    char h4[20]="morn";
//    cout<<"enter str"<<endl;
//    cin.get(h,20);
//    cout<<h<<endl;
//    cin.ignore();//remove any extra characters after reading the first string(getline)
//    cout<<"enter 2ND str"<<endl;
//    cin.get(h2,20);
//    cout<<h2<<endl;
//    cout<<strlen(h2)<<endl;
//    cout<<strcat(h2,h)<<endl;
//    cout<<h2<<endl;
//    cout<<strncat(h2,h,4)<<endl;
//    cout<<h2<<endl;
//    strncpy(h3,h2,11);
//    cout<<h3<<endl;
//    if(strstr(h3,h4)!= NULL)
//    {
//        cout<<strstr(h3,h4)<<endl; //cout<<strstr(h3,"mor")<<endl;
//    }
//    else{cout<<"not found"<<endl;}
//    cout<<strchr(h3,'o')<<endl;
//    cout<<strrchr(h3,'o')<<endl;

//    string str;
//    getline(cin,str);
//    cout<<str<<endl;
//    cout<<str.length()<<endl;
//    cout<<str.size()<<endl; //same as length
//    cout<<str.capacity()<<endl;
//    //str.resize(30);
//    cout<<str.capacity()<<endl;
//    cout<<str.max_size()<<endl;
//    //str.clear();
//    //str.erase(); //same
//    if(str.empty())
//    {
//        cout<<"empty"<<endl;
//    }
//    else
//    {
//        cout<<"not empty"<<endl;
//    }
//
//    str.append("kumar");
//    cout<<str<<endl;
//    str.insert(5,"LogaNselva",5);
//    cout<<str<<endl;
//    str.replace(5,5,"");
//    cout<<str<<endl;
//    str.push_back('S');
//    cout<<str<<endl;
//    str.pop_back();
//    cout<<str<<endl;
//    string str2="HI";
//    str.swap(str2);
//    cout<<str<<endl;
//    cout<<str2<<endl;
//    char str3[11];
//    //str2.copy(str3,str2.length());
//    //cout<<str3<<endl;
//    str2.copy(str3,5);
//    str3[5]='\0';
//    cout<<str3<<endl;
//    string str4 ="aku";
//    cout<<str2.find(str4)<<endl;
//    cout<<str2.find('a')<<endl;
//    cout<<str2.rfind('a')<<endl;
//    cout<<str2.find_first_of('a')<<endl;
//    cout<<str2.find_last_of('a')<<endl;
//    cout<<str2.find_first_of('a',5)<<endl;
//    cout<<str2.find_first_of('ak',5)<<endl;
//    cout<<str2.substr(0,5)<<endl;
//    string str5 = "selvakumar";
//    cout<<str2.compare(str5)<<endl;
//    return 0;
//}
