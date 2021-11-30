#include <iostream>
#include <vector>
using namespace std;

vector<int> path;
vector<vector<int>> ans;
void backtraing(int n, int k, int starindex)
{
    if (path.size() == k)
    {
        ans.push_back(path);
       
    }
   
    for (int i = starindex; i <=n; i++)
    {
       path.push_back(i);
       backtraing(n,k,i+1);
       path.pop_back();
    }
}
int main()
{
    backtraing(4,3,1);
    for (auto &i:ans)
    {
       for (auto &j :i)
       {
           cout<<j<<" ";
       }
       cout<<endl;
    }
    system("pause");
    
}