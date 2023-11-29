#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> p;
    p.push_back(0);
    p.push_back(1);
    
    for(int i = 2; i <= n; i++)
    {
        p.push_back((p[i-2] + p[i - 1]) % 1234567);
    }
    
    return p.back();
}