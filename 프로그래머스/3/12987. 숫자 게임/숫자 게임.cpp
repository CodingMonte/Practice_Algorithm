#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    sort(A.begin(),A.end(),[](int a, int b)
         {
            return a > b; 
         });
    sort(B.begin(),B.end(),[](int a, int b)
         {
            return a > b; 
         });
    int idx = 0;
    for(int a : A)
    {
        if(idx < B.size() && B[idx] > a)
        {
            answer++;
            idx++;
        }
    }
    return answer;
}