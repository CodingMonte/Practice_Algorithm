#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<double> slope;
    
    for(int i = 0; i < dots.size();i++)
    {
        for(int j = i + 1; j < dots.size();j++)
        {
            slope.push_back(((double)dots[i][1] - (double)dots[j][1]) / ((double)dots[i][0] - (double)dots[j][0]));
        }
    }
    if(slope[0] == slope[5] || slope[1] == slope[4] || slope[2] == slope[3])
        return 1;
    else
        return 0;
}