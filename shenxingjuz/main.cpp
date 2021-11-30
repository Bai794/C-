#include <iostream>
using namespace std;
int toal_number(int n)
{
    if (n == 1)
        return 1;
    else
        return n + toal_number(n - 1);
}
int main()
{
    int num = 0;

    int a[100][100] = {0};

    while (cin >> num)
    {
        int temp = 1;
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                a[i - j][j] = temp;
                temp++;
                /* code */
            }
            /* code */
        }
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num - i; j++)
            {
                cout << a[i][j] << " ";
                /* code */
            }
            cout << endl;

            /* code */
        }
    }

    system("pause");
}