#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<int> num;
    for(int i = 0; i< dungeons.size();i++)
        num.push_back(i);
    
    do
    {
        int condition = k;
        int count = 0;
        for(int i = 0; i < num.size(); i++)
        {
            if(condition >= dungeons[num[i]][0])
            {
                condition -= dungeons[num[i]][1];
                count++;
            }
        }

        answer = count > answer ? count : answer;
    }while(next_permutation(num.begin(), num.end()));

    return answer;
}