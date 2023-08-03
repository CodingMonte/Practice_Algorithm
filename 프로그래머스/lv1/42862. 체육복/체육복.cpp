#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    map<int,int> students;
    sort(lost.begin(),lost.end());
    sort(reserve.begin(), reserve.end());
    for(int i = 1; i <= n; i++)
    { 
        if(find(reserve.begin(), reserve.end(), i) != reserve.end())
        {
            if(find(lost.begin(), lost.end(), i) != lost.end())
                students[i] = 1;
            else
                students[i] = 2;
        }
        else if(find(lost.begin(), lost.end(), i) != lost.end())
            students[i] = 0;
        else
            students[i] = 1;
    }
    
    for(int i = 1; i <= n; i++)
    {
        if(students[i] == 2)
        {
            if(students[i - 1] == 0 && i-1 >= 1)
            {
                students[i] = 1;
                students[i - 1] = 1;
            }
            else if(students[i + 1] == 0 && i + 1 <= n)
            {
                students[i] = 1;
                students[i + 1] = 1;
            }
        }
        
    }
    for(int i = 1; i <= n; i++)
    {
        if(students[i] >= 1)
            answer++;
    }
    return answer;
}