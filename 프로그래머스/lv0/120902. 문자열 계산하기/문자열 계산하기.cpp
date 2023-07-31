#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> nums;
    stringstream ss(my_string);
    string num;
    while(ss >> num)
        nums.push_back(num);
    
    answer = stoi(nums[0]);
    int flag = 0;
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] == "+")
        {
            flag = 0;
            continue;
        }
        else if(nums[i] == "-")
        {
            flag = 1;
            continue;
        }
        if(flag == 0)
            answer += stoi(nums[i]);
        else
            answer -= stoi(nums[i]);
    }
    return answer;
}