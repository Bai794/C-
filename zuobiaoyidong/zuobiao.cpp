#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    
    while(cin >> str)
    {
        //初始化坐标
        int x = 0, y = 0;
        //存储单步操作
        vector<string> steps;
        
        //把字符串拆分
        int wordlen = 0;
        for(int i = 0; i < str.size(); ++i)
        {
            while(str[i] != ';')
                wordlen ++, i ++;
            steps.push_back(str.substr(i - wordlen, wordlen));
            wordlen = 0;
        }
        //分解成功
        //for(auto x : steps) cout << x << endl;
        
        //对单个steps执行坐标变换
        for(int i = 0; i < steps.size(); ++i)
        {
            int num = 0;
            //长度3  A10
            if(steps[i].length() == 3 && steps[i][1] <= '9' && steps[i][1] >= '0' &&  steps[i][2] <= '9' && steps[i][2] >= '0')
                num = (steps[i][1] - '0') * 10 + steps[i][2] - '0';
            //长度2  A5
            if(steps[i].length() == 2 && steps[i][1] <= '9' && steps[i][1] >= '0')
                num = steps[i][1] - '0';
            
            switch(steps[i][0])//ASDW
            {
                case 'A': x -= num; break;
                case 'D': x += num; break;
                case 'W': y += num; break;
                case 'S': y -= num; break;
                default: break;
            }
        }
        cout << x << ',' << y << endl;
    }
    
    return 0;
}