#include <iostream>
#include <vector>
using namespace std;

int N, M; //�ֱ�����к���
vector<vector<int>> maze = {
	{0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{1, 1, 1, 1, 0},
	{1, 1, 0, 0, 0},
	{1, 1, 0, 0, 0}};		   //�Թ�����
vector<vector<int>> path_temp; //�洢��ǰ·������һά��ʾλ��
vector<vector<int>> path_best; //�洢���·��

void MazeTrack(int i, int j)
{
	maze[i][j] = 1;				 //��ʾ��ǰ�ڵ����ߣ���������
	path_temp.push_back({i, j}); //����ǰ�ڵ���뵽·����
	if (i == N - 1 && j == M - 1) //�ж��Ƿ񵽴��յ�
		if (path_best.empty() || path_temp.size() < path_best.size())
			path_best = path_temp;
	if (i > N - 1 || j > M - 1 || i < 0 || j < 0)
		return;
	if (i - 1 >= 0 && maze[i - 1][j] == 0) //̽���������Ƿ����
		MazeTrack(i - 1, j);
	if (i + 1 < N && maze[i + 1][j] == 0) //̽���������Ƿ����
		MazeTrack(i + 1, j);
	if (j - 1 >= 0 && maze[i][j - 1] == 0) //̽���������Ƿ����
		MazeTrack(i, j - 1);
	if (j + 1 < M && maze[i][j + 1] == 0) //̽���������Ƿ����
		MazeTrack(i, j + 1);
	//
	maze[i][j] = 0;		  //�ָ��ֳ�����Ϊδ��
	path_temp.pop_back(); //����
}
int main()
{
	N = M = 5;
	MazeTrack(0, 0); //����Ѱ���Թ����ͨ·
	for (auto &i : path_best)
		cout << '(' << i[0] << ',' << i[1] << ')' << endl; //���ͨ·
	system("pause");
	return 0;
}