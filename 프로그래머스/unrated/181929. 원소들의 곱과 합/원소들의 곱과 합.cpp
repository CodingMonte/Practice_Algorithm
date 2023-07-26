#include <string>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    int m = accumulate(arr.begin(), arr.end(), 1, std::multiplies<int>());
    int s = accumulate(arr.begin(), arr.end(), 0);
    return m > pow(s,2) ? 0:1;
}