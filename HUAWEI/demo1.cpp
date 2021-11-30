#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pos;
vector<string> mystring;
vector<char> char_str;
void myswap(string &s, int start, int end)
{
    // for (int i = start; i < (end - start) / 2 + start; i++)
    // {
    //     //    swap(s[i],s[end+start-i]);
    //     char temp = s[i];
    //     s[i] = s[end + start - i];
    //     s[end + start - i] = temp;
    // }
    for(int i=start,j=end;i<j;i++,j--)
    {
        swap(s[i],s[j]);
    }
    
}
int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    int len = str.length();
    for (int i = 1; i < len - 1; i++)
    {
        if (str[i] == '(')
            pos.push_back(i + 1);
        else if (str[i] == ')')
            pos.push_back(i - 1);
    }
    for (int i = 0; i < pos.size(); i += 2)
    {
        myswap(str, pos[i], pos[i + 1]);
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '(' && str[i] != ')')
            char_str.push_back(str[i]);
    }
    for (int i = char_str.size() - 1; i >= 0; i--)
    {
        cout << char_str[i];
    }

    // cout<<str<<endl;
    system("pause");
}