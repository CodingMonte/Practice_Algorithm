#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string,int> Entrytime;
    map<string,int> Totaltime;
    
    int default_time = fees[0];
    int default_fee = fees[1];
    int unit_time = fees[2];
    int unit_fee = fees[3];
    
    int hour,minute;
    string inout,car;
    
    for(int i = 0; i < records.size();i++)
    {
      
        hour = stoi(records[i].substr(0,2));
        minute = stoi(records[i].substr(3,2));
        car = records[i].substr(6,4);
        inout = records[i].substr(11);
        if(inout == "IN")
        {
            Entrytime[car] += hour*60 + minute;
        }
        else
        {
            Totaltime[car] += hour*60 + minute - Entrytime[car];
            Entrytime.erase(car);
        } 
    }
    for(auto& v : Entrytime)
    {
        if(v.second || v.second == 0)
        {
            Totaltime[v.first] += 23*60+59 - Entrytime[v.first];
        }
    }
    for(auto& t : Totaltime)
    {
        if(t.second <= default_time)
        {
            answer.push_back(default_fee);
        }
        else
        {
            if((t.second-default_time)%unit_time > 0)
                answer.push_back(default_fee + ((t.second-default_time)/unit_time + 1)*unit_fee);
            else
                answer.push_back(default_fee + (t.second-default_time)/unit_time*unit_fee);
        }
    }
    return answer;
}