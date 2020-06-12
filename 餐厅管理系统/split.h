#include <bits/stdc++.h>
using namespace std;
vector<string> split(string strTime)
{
    vector<string> result;
    string temp("");
    strTime+='-';//字符串结束标记，方便将最后一个单词入vector
    for(size_t i = 0; i < strTime.size(); i++)
    {
        if(strTime[i] == '-' || strTime[i] == '.' || strTime[i] == ' ' ||strTime[i] == ':')
        {
            result.push_back(temp);
            temp = "";
        }
        else
        {
            temp += strTime[i];
        }
    }
    return result;
}

