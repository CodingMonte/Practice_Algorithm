#include <string>
#include <vector>

using namespace std;
int gcd(int num1, int num2)
{
    /* 유클리드 호제법 */
    while(num2 > 0)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp % num2;
    }
    return num1;
}
int lcm(int num1, int num2)
{
    /* num1과 num2의 최대 공약수 = g, num1 * num2 / g = 최대 공배수 */
    return num1*num2/gcd(num1,num2);
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));
    return answer;
}