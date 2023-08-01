#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int flag = 0,i;
    for(i = 0; i < A.size();i++)
    {
        if(A == B)
        {
            flag = 1;
            break;
        }
        char lastChar = A.back();
        A.pop_back();
        A = lastChar + A;
    }
    if(flag == 1)
        return i;
    else
        return -1;
}