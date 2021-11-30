#include "stdio.h"
#include "windows.h"
int luji[25][2] = {0};
int num = 0;
int map[5][5] = {{1, 0, 0, 0, 1},
                 {1, 1, 0, 1, 0},
                 {0, 1, 0, 0, 1},
                 {1, 1, 1, 1, 1},
                 {0, 0, 0, 1, 1}};
void findpath(int a[5][5], int x, int y)
{
    a[x][y] = 0;
    luji[num][0] = x + 1;
    luji[num][1] = y + 1;
    num++;
    if (x == 4 && y == 4)
    {
        printf("have a path: ");
        for (int i = 0; i < 25; i++)
        {
            if (luji[i][0] == 0 && luji[i][1] == 0)
                break;
            printf("(%d,%d)", luji[i][0], luji[i][1]);
        }
        printf("\n");
    }
    else
    {
        if (x + 1 < 5 && a[x + 1][y] == 1)
        {
            findpath(a, x + 1, y);
        }
        if (x - 1 > 0 && a[x - 1][y] == 1)
        {
            findpath(a, x - 1, y);
        }
        if (y + 1 < 5 && a[x][y + 1] == 1)
        {
            findpath(a, x, y + 1);
        }
        if (y - 1 > 0 && a[x][y - 1] == 1)
        {
            findpath(a, x, y - 1);
        }
    }
    a[x][y] = 1;
    num--;
}

int main()
{
    findpath(map, 0, 0);
    system("pause");
}