#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<str.length()<<endl;
    cout<<str.size()<<endl; //same as length
    cout<<str.capacity()<<endl;
    //str.resize(30);
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;
    //str.clear();
    //str.erase(); //same
    if(str.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"not empty"<<endl;
    }

    str.append("kumar");
    cout<<str<<endl;
    str.insert(5,"LogaNselva",5);
    cout<<str<<endl;
    str.replace(5,5,"");
    cout<<str<<endl;
    str.push_back('S');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    string str2="HI";
    str.swap(str2);
    cout<<str<<endl;
    cout<<str2<<endl;
    char str3[11];
    //str2.copy(str3,str2.length());
    //cout<<str3<<endl;
    str2.copy(str3,5);
    str3[5]='\0';
    cout<<str3<<endl;
    string str4 ="aku";
    cout<<str2.find(str4)<<endl;
    cout<<str2.find('a')<<endl;
    cout<<str2.rfind('a')<<endl;
    cout<<str2.find_first_of('a')<<endl;
    cout<<str2.find_last_of('a')<<endl;
    cout<<str2.find_first_of('a',5)<<endl;
    cout<<str2.find_first_of('ak',5)<<endl;
    cout<<str2.substr(0,5)<<endl;
    string str5 = "selvakumar";
    cout<<str2.compare(str5)<<endl;
    cout<<str2.at(6)<<endl;
    cout<<str2.front()<<endl;
    cout<<str2.back()<<endl;
    cout<<str+ " " +str2<<endl;
    str+="selvakumar";
    cout<<str<<endl;
    string str6=str;
    cout<<str6<<endl;
    str6[1]=' ';
    cout<<str6<<endl;

//    string::iterator it; // like a pointer
//    for(it=str6.begin();it!=str6.end();it++)
//    {
//        *it-=32;
//        cout<<*it;
//    }

    cout<<endl;
//    string::reverse_iterator rit; // like a pointer
//    for(rit=str6.rbegin();rit!=str6.rend();rit++)
//    {
//       *rit+=32;
//       cout<<*rit;
//    }
//    cout<<endl;
    for(int i=0;str6[i]!='\0';i++)
    {
        str6[i]-=32;
        cout<<str6[i];
    }
    cout<<endl;
    string str7="liril";
    string str8="";
    int len = str7.length();
    str8.resize(len);
    string::reverse_iterator rit; // like a pointer
    int i=0;
    for(rit=str7.rbegin();rit!=str7.rend();rit++)
    {
       str8[i]=*rit;
       i++;
    }
    cout<<str8<<endl;
//    for(int i=0,j=len-1;i<len;i++,j--)
//    {
//        str8[i]=str7[j];
//    }
//    cout<<str8<<endl;
//    str8[len]='\0';
    if(str7.compare(str8)==0)
    {
        cout<<"palindrome"<<endl;
    }
    else{cout<<"no palindrome"<<endl;
    }
     string::iterator it; // like a pointer
    for(it=str8.begin();it!=str8.end();it++)
    {
        cout<<(int)*it<<endl;
    }

    string email="e_uc.s@skcet.ac.in";
    int k=(int)email.find('@');
    string uname=email.substr(0,k);
    cout<<uname<<endl;
    for(int i=0;i<uname.length();i++)
    {
        //cout<<(int)uname[i]<<endl;
        if(((int)uname[i]>=65 && (int)uname[i]<=90) || ((int)uname[i]>= 95 && (int)uname[i]<=122) || (int)uname[i]==46 )
        {
            cout<<uname[i]<<endl;
        }
        else
        {
            cout<<"'"<<uname[i]<<"'"<<" is not allowed"<<endl;
        }
    }
    return 0;
}
