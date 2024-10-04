#include <string>
#include <vector>
#include <iostream>

using namespace std;
int timetosec(string time)
{
    int min = 0, sec = 0;
    sscanf(time.c_str(), "%d:%d", &min, &sec);
    return min*60 + sec;
}
string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) 
{
    string answer = "";
    int v_len = timetosec(video_len);
    int start = timetosec(pos);
    int op_s  = timetosec(op_start);
    int op_e  = timetosec(op_end);
    
    if(start <= op_e && start >= op_s)
            start = op_e;
    for(int i = 0; i < commands.size(); i++)
    {
        if(commands[i] == "prev")
        {
            start -= 10;
            if(start <= 0)
                start = 0;
        }
        else if(commands[i] == "next")
        {
            start += 10;
            if(start >= v_len)
                start = v_len;
        }
        if(start <= op_e && start >= op_s)
            start = op_e;
        
    }
    string hour;
    string min;
    if(start / 60 < 10)
    {
        hour = '0' + to_string(start/60);
    }
    else
    {
        hour = to_string(start/60);
    }
    if(start % 60 < 10)
    {
        min = '0' + to_string(start%60);
    }
    else
    {
        min = to_string(start%60);
    }
    answer = hour + ":" + min;

    return answer;
}