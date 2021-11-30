#include <iostream>
#include <string>
#include <vector>
using namespace std;
string temp;
void dfs(string &s,int start,int n)
{
    if(start==n){
        cout<<s<<endl;
        return;
    } 
    for (int i = start; i < n; i++)
    {  
         swap(s[i],s[start]);
          dfs(s,start+1,n);
          swap(s[i],s[start]);
        
    }
}
int main()
{
    string str;
    getline(cin,str);
    int len=str.size();
    dfs(str,0,len);
    system("pause");
}