#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    while (getline(cin, str))
    {
        int len = str.size() % 8;
        if (len != 0)
        {
            for (int i = 0; i < 8 - len; i++)
            {
                str.push_back('0');
                /* code */
            }
            /* code */
        }

        for (int i = 0; i < str.size(); i += 8)
        {
            cout << str.substr(i, 8) << endl;
            /* code */
        }
    }
}
