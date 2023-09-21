#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(int n, int t, int m, vector<string> timetable) {
    string answer = "";
    vector<int> times;
    for(string time : timetable)
    {
        int hour = stoi(time.substr(0, 2));
        int min = stoi(time.substr(3, 2));
        times.push_back(hour*60 + min);
    }
    sort(times.begin(), times.end());
    
    int lasttime = 9*60+(n-1)*t;
    int idx = 0;
    int corntime = 0;
    for(int bustime = 9*60; bustime <= lasttime;bustime += t)
    {
        int cnt = 0;
        while(idx < times.size() && times[idx] <= bustime && cnt < m)
        {
            idx++;
            cnt++;
        }
        
        if(bustime == lasttime)
        {
            cout << m << " " << idx << " " << cnt << endl;
            if(cnt == m) corntime = times[idx - 1] - 1;
            else corntime = bustime;
        }
    }
    answer = to_string(corntime / 60) + ":";
    if(corntime / 60 < 10) answer = "0" + answer;
    if(corntime % 60 < 10) answer += "0";
    answer += to_string(corntime % 60);
    
    return answer;
}