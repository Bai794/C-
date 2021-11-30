#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<vector<int>> path;
vector<vector<int>> path_best; //´æ´¢×î¼ÑÂ·¾¶
int size = 100;
vector<vector<int>> maze = {
    {0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {1, 1, 1, 1, 0},
    {1, 1, 0, 0, 0},
    {1, 1, 0, 0, 0}}; //ÃÔ¹¬¾ØÕó
void dfs_mg(int x, int y)
{
    maze[x][y] =1;
    path.push_back({x, y});
    if (x == 4 && y == 4)
    {
        if (path_best.empty() || path.size() < path_best.size())
            path_best = path;
        return;
    }
    if (x > 4 || y > 4 || x < 0 || y < 0)
        return;
    if (x - 1 > 0 && maze[x - 1][y] == 0)
        dfs_mg(x - 1, y);
    if (x + 1 < 5 && maze[x + 1][y] == 0)
        dfs_mg(x + 1, y);
    if (y - 1 > 0 && maze[x][y - 1] == 0)
        dfs_mg(x, y - 1);
    if (y + 1 < 5 && maze[x][y + 1] == 0)
        dfs_mg(x, y + 1);
    maze[x][y] = 0;
    path.pop_back();
}
int main()
{
    dfs_mg(0, 0);
    for (auto &i : path_best)
    {
        cout << "<" << i[0] << "," << i[1] << ">" << endl;
    }

    system("pause");
}