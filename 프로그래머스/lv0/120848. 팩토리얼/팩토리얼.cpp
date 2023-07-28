#include <string>
#include <vector>

using namespace std;

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int solution(int n) {
    int i = 0;
    while (factorial(i) <= n)
        i++;
    return --i;
}