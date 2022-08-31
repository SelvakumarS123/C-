#include <iostream>

using namespace std;

int main()
{
    string email;
    string validated_email;
    int validation=0;
while(validation == 0)
{
    cout<<"enter email"<<endl;
    getline(cin,email);
    int len=email.length();
    validated_email.resize(len);
    validated_email[len]='\0';
    for(int i=0;i<len;i++)
    {
        if (email[i]=='_' || email[i]=='.' || email[i]=='@'||
             email[i]== '0'||email[i]=='1'||email[i]=='2'||email[i]=='3'||email[i]=='4'||email[i]=='5'||
             email[i]=='6'||email[i]=='7'||email[i]=='8'||email[i]=='9' ||97<=email[i]&&email[i]<=125)
        {
            validated_email[i]=email[i];
            validation = 1;
        }
//        else
//        {
//            cout<<"email can have only '_','.' and '@' as special characters"<<endl;
//        }
    }
}
    if(email.length()>validated_email.length())
    {
        cout<<"email can have only '_','.' and '@' as special characters"<<endl;
    }
    else
    {
        cout<<"validated_email = "<<validated_email<<endl;
        int final_index = validated_email.find('@');
        cout<<"user name = "<<validated_email.substr(0,final_index)<<endl;
    }
    return 0;
}
