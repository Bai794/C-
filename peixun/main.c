#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
void forxun(int num, int bsdhg); //声明函数
// int i=0;//全局变量
float sum=1;
int jiecheng(int n)
{
    if(n==1)
     return 1;
     else
     return n*jiecheng(n-1);
}
void cla()
{
    int num=1;
    float zhi=1.0;
    while (zhi>=1E-05)
    {
        zhi=1.0f/jiecheng(num);
        num++;
        sum+=zhi;
    }
    printf("%d %f\r\n",num,sum);
}
int main()
{
    int i = 0; //main
    cla();
    // forxun(1, i);
    system("pause");
}
void forxun(int num, int i)
{

    //局部变量

    for (int j = 0; j < 5,j>2; j++)
    {
        if (j <= 2)
        {
            printf("不输出\r\n");
            break;
        }
        printf("hello \r\n");
    }
}