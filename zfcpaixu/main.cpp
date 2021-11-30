#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    string str;
    vector<string>v;
    while (n)
    {
       n--;
       cin>>str;
       v.push_back(str);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    system("pause");
    
}
