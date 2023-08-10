#include <string>
#include <vector>
#include <cmath>
using namespace std;
int GCD(int a, int b)
{
    return b? GCD(b,a%b) : a;
}

int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i = 1; i < arr.size();i++)
    {
        int gcd = GCD(arr[i],answer);
        int lcm = answer * arr[i] / gcd;
        answer = lcm;
    }
    return answer;
}