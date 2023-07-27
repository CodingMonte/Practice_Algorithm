#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i = 0; i < queries.size(); i++)
    {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        for(int j = s; j <= e; j++)
        {
            if(s <= j && e >= j && k < arr[j])
            {
                if(i >= answer.size())
                    answer.push_back(arr[j]);
                else
                {
                    answer[i] = answer[i] < arr[j] ? answer[i] : arr[j];
                }
            }
        }
        if(i >= answer.size())
            answer.push_back(-1);
    }
    return answer;
}