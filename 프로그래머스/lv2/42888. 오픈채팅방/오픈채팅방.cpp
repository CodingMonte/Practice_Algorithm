#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) 
{
    vector<string> answer;
    vector<vector<string>> customer;
    for(int i = 0; i < record.size();i++)
    {
        stringstream ss(record[i]);
        string temp;
        vector<string> data;
        while(ss >> temp)
            data.push_back(temp);
        customer.push_back(data);
    }
    map <string, string> data;
    for(int i = 0; i < customer.size();i++)
    {
        if(customer[i].size() == 3)
        {
            data[customer[i][1]] = customer[i][2];
        }
    }
    for(int i = 0; i < customer.size();i++)
    {
        if(customer[i][0] == "Enter")
            answer.push_back(data[customer[i][1]] + "님이 들어왔습니다.");
        else if(customer[i][0] == "Leave")
            answer.push_back(data[customer[i][1]] + "님이 나갔습니다.");
    }
    return answer;
}