#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string str,str2;
    getline(cin,str);
    int len=str.size();
    for (int  i = 0; i < len; i++)
    {
        if (str[i]!=str2.back())
        {
            str2.push_back(str[i]);
            /* code */
        }
        else {
            str2.pop_back();
        }
    }
    for ( int  i = 0; i < str2.size(); i++)
    {
        cout<<str2[i];
    }
    system("pause");
    

}