#include <iostream>
#include <vector>
using namespace std;

int N, M; //分别代表行和列
vector<vector<int>> maze = {
	{0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{1, 1, 1, 1, 0},
	{1, 1, 0, 0, 0},
	{1, 1, 0, 0, 0}};		   //迷宫矩阵
vector<vector<int>> path_temp; //存储当前路径，第一维表示位置
vector<vector<int>> path_best; //存储最佳路径

void MazeTrack(int i, int j)
{
	maze[i][j] = 1;				 //表示当前节点已走，不可再走
	path_temp.push_back({i, j}); //将当前节点加入到路径中
	if (i == N - 1 && j == M - 1) //判断是否到达终点
		if (path_best.empty() || path_temp.size() < path_best.size())
			path_best = path_temp;
	if (i > N - 1 || j > M - 1 || i < 0 || j < 0)
		return;
	if (i - 1 >= 0 && maze[i - 1][j] == 0) //探索向上走是否可行
		MazeTrack(i - 1, j);
	if (i + 1 < N && maze[i + 1][j] == 0) //探索向下走是否可行
		MazeTrack(i + 1, j);
	if (j - 1 >= 0 && maze[i][j - 1] == 0) //探索向左走是否可行
		MazeTrack(i, j - 1);
	if (j + 1 < M && maze[i][j + 1] == 0) //探索向右走是否可行
		MazeTrack(i, j + 1);
	//
	maze[i][j] = 0;		  //恢复现场，设为未走
	path_temp.pop_back(); //回溯
}
int main()
{
	N = M = 5;
	MazeTrack(0, 0); //回溯寻找迷宫最短通路
	for (auto &i : path_best)
		cout << '(' << i[0] << ',' << i[1] << ')' << endl; //输出通路
	system("pause");
	return 0;
}