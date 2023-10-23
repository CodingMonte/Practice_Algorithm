#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map <string,vector<string>> ReportArr;
    map <string,int> ReportCnt;

    for(string str : report)
    {
        stringstream ss(str);
        string reporter;
        string target;
        ss >> reporter >> target;
        auto it = find(ReportArr[reporter].begin(), ReportArr[reporter].end(), target);
        if(it == ReportArr[reporter].end())
        {   
            ReportArr[reporter].push_back(target);
            ReportCnt[target]++;
        }
    }
    for(string str : id_list)
    {
        int temp = 0;
        for(int i = 0; i < ReportArr[str].size();i++)
            if(ReportCnt[ReportArr[str][i]] >= k)
                temp++;
        answer.push_back(temp);
    }
    return answer;
}