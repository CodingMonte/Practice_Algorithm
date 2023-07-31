#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    
    for(int i = 1; i < array.size(); i++)
    {
        if(abs(n - answer) == abs(n - array[i]))
            answer = answer < array[i] ? answer : array[i];
        else
            answer = abs(n - answer) < abs(n -array[i]) ? answer : array[i];
    }
    return answer;
}