#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int high = triangle.size();
    
    vector<vector<int>> acc(high, vector<int>(high,0));
    acc[0][0] = triangle[0][0]; // 꼭대기 대입
    
    for(int i = 1; i < high; i++)
    {
        for(int j = 0; j <= i;j++)
        {
            if(j == 0)      // 맨 왼쪽 다 더하기
                acc[i][0] = acc[i - 1][0] + triangle[i][0];
            else if(j == i) // 맨 오른쪽 다 더하기
                acc[i][j] = acc[i - 1][j - 1] + triangle[i][j];
            else            // 위에서 근접한 애들 중 더 큰 값 더하기
                acc[i][j] = max(acc[i - 1][j - 1],acc[i - 1][j]) + triangle[i][j];
        }
    }
    for(int i = 0; i < high; i++)
    {
        answer = answer >= acc[high - 1][i] ? answer : acc[high - 1][i]; 
    }
    return answer;
}