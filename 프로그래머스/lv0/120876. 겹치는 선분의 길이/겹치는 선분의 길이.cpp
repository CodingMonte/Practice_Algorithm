#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int start1 = lines[0][0];
    int end1 = lines[0][1];
    int start2 = lines[1][0];
    int end2 = lines[1][1];
    int start3 = lines[2][0];
    int end3 = lines[2][1];

    vector<int> coor;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            coor.push_back(lines[i][j]);
    
    sort(coor.begin(),coor.end());
    int min = *coor.begin();
    int max = *coor.end();
    
    for(int i = min; i <= max; i++)
    {
        if(((i > start1 && i <= end1) && (i > start2 && i <= end2)) ||
           ((i > start2 && i <= end2) && (i > start3 && i <= end3)) ||
           ((i > start1 && i <= end1) && (i > start3 && i <= end3)))
            answer++;
    }

    return answer;
}