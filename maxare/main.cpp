#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#include <algorithm>
#include <unordered_map>
vector<vector<int>>map= {{1,0,0,0},
    {0,0,1,1},
    {1,1,1,1},
    {0,0,0,1}
};
int ans=0;
void bfs(vector<vector<int>>&mp,int i,int j)
{
    if(i<0||j<0||i>=mp.size()||j>=mp[0].size())
        return;
    if(mp[i][j]==1)
    {
         ans++;
         mp[i][j]=0;
    }
    if(i-1>=0&&mp[i-1][j]==1)
        bfs(mp,i-1,j);
    if(j-1>=0&&mp[i][j-1]==1)
        bfs(mp,i,j-1);
    if(i+1<mp.size()&&mp[i+1][j]==1)
        bfs(mp,i+1,j);
    if(j+1<mp[0].size()&&mp[i][j+1]==1)
        bfs(mp,i,j+1);
    mp[i][j]==1;//这一点特别重要 要不然陷入死循环
}
int main()
{
    int result=0;
    for(int i=0; i<map.size(); i++)
    {
        for(int j=0; j<map[0].size(); j++)
        {
            if(map[i][j]==1)
            {
                bfs(map,i,j);
                result=max(ans,result);
            }
            ans=0;
        }
    }
    cout<<"the ans is:"<<result<<endl;
    system("pause");
}
