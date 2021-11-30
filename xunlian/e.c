#include "stdio.h"
#include "windows.h"
float sum = 1;
int jiecheng(int n)
{

    if (n == 1)
        return 1;
    else
        return n * jiecheng(n - 1);
}
void cla()
{
    int num = 1;
    float zhi = 1.0;
    while (zhi > 1E-05)
    {
        zhi = 1.0f / jiecheng(num);
        sum += zhi;
        num++;
    }
    printf("%d  %f\r\n", num, sum);
}
int main()
{
    cla();
    system("pause");
}