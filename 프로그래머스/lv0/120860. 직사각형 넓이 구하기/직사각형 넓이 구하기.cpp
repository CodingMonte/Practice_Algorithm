#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> dots) {
    
    int x1 = dots[0][0];
    int y1 = dots[0][1];
    int x2,y2;
    cout << x1 << ',' << y1 << endl;
    for(int i = 1; i < dots.size(); i++)
    {
        if(x1 != dots[i][0])
            x2 = dots[i][0];
        if(y1 != dots[i][1])
            y2 = dots[i][1];
    }
    cout << x2 << ',' << y2 << endl;
    int x_len = x1 > x2 ? x1-x2 : x2- x1;
    int y_len = y1 > y2 ? y1-y2 : y2- y1;
    return x_len*y_len;
}