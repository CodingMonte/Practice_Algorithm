#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int width = 0,height = 0;
    for(int i = 0; i < sizes.size();i++)
    {
        if(sizes[i][0] <= sizes[i][1]) swap(sizes[i][0],sizes[i][1]);
        width = width >= sizes[i][0] ? width : sizes[i][0];
        height = height >= sizes[i][1] ? height : sizes[i][1];
    }
    return width * height;
}