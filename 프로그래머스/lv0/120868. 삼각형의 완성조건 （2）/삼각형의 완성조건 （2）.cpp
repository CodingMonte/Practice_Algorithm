#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int l, s;
    l = sides[0] >= sides[1] ? sides[0] : sides[1];
    s = sides[0] <= sides[1] ? sides[0] : sides[1];
    int i = l-s+1;
    
    while(i != l + s)
    {
        if(i <= l && i + s > l)
            answer++;
        else if(l < i && l + s > i)
            answer++;
        i++;
        if(i + s == l)
            i = l + 1;
    }
    return answer;
}