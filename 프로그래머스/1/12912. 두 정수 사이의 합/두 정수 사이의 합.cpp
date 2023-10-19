#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) 
{
    long long answer = 0;
    int n1,n2;
    if(a >= b){n1 = a;n2 = b;}
    else{n1 = b;n2 = a;}
    for(int i = n2; i <= n1; i++)
        answer += i;
    return answer;
}