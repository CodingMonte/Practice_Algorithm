#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> land)
{
    int n = land.size();
    for(int i = 1; i < n; i++)
    {
        land[i][0] += max({land[i-1][1], land[i-1][2], land[i-1][3]});
        land[i][1] += max({land[i-1][0], land[i-1][2], land[i-1][3]});
        land[i][2] += max({land[i-1][1], land[i-1][0], land[i-1][3]});
        land[i][3] += max({land[i-1][1], land[i-1][2], land[i-1][0]});    
    }
    
	return *max_element(land[n-1].begin(), land[n-1].end());
}

int main()
{
	vector<vector<int>> land = {{1,2,3,5},{5,6,7,8},{4,3,2,1}};

    cout << solution(land) << endl;
	return 0;
}