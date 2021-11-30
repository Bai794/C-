#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n)
    {
        int vec[1000]={0};
        vector<int> xiabao;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            if(vec[m]==0)
            {
                xiabao.push_back(m);
            }
            vec[m] = 1;
        }
        sort(xiabao.begin(), xiabao.end());
        for (int i = 0; i < xiabao.size(); i++)
        {
            cout << xiabao[i] << endl;
        }
        memset(vec, 0, n * 4);
    }
}