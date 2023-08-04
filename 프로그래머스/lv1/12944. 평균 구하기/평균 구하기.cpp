#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(int n : arr)
    {
        answer += (double)n;
    }
    return answer/arr.size();
}