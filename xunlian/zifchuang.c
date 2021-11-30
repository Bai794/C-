#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
int cal(int num)
{
    if (num > 0 && num < 10)
        return 1;
    else if (num > 10 && num < 100)
    {
        return 2;
    }
    else if (num > 100 && num < 1000)
    {
        return 3;
    }
    else if (num > 1000 && num < 10000)
    {
        return 4;
    }
    else if (num > 10000 && num < 100000)
    {
        return 5;
    }
}
int main()
{
    int num = 0;
    scanf("%d", &num);
    int ans[5];
    ans[0] = num % 10;
    ans[1] = num / 10 % 10;
    ans[2] = num / 100 % 10;
    ans[3] = num / 1000 % 10;
    ans[4] = num / 10000 % 10;
    int time = cal(num);
    printf("weishu %d\r\n",time);
    for (int i = 0; i < time; i++)
    {
        printf("%d ", ans[i]);
    }
    system("pause");
}