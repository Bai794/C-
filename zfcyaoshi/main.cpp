#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int len;
    cin>>str;
    len=str.length();
    for(int i=0;i<len;i++)
    {
        if('A'<=str[i]&&str[i]<'Z') cout<<char(str[i]+33);
        else if(str[i]=='Z') cout<<'a';
        else if(str[i]=='a'||str[i]=='b'||str[i]=='c') cout<<2;
        else if(str[i]=='d'||str[i]=='e'||str[i]=='f') cout<<3;
        else if(str[i]=='g'||str[i]=='h'||str[i]=='i') cout<<4;
        else if(str[i]=='j'||str[i]=='k'||str[i]=='l') cout<<5;
        else if(str[i]=='m'||str[i]=='n'||str[i]=='o') cout<<6;
        else if(str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s') cout<<7;
        else if(str[i]=='t'||str[i]=='u'||str[i]=='v') cout<<8;
        else if(str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z') cout<<9;
        else cout<<str[i];
    }
    return 0;
}