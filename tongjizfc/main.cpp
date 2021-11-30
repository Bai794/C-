#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int len = str.size();
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            cout << len - i - 1;
            break;
        }
        if (i == 0)
            cout << len;
        /* code */
    }
    system("pause");
}