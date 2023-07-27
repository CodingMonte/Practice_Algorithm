#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    while(l <= r)
    {
        int num = l;
        while(1)
        {
            
            if(num % 10 == 5 || num % 10 == 0)
            {
                num /= 10;
                if(num == 0)
                {
                    answer.push_back(l);
                    break;
                }
                    
            }
            else
                break;
        }
        l++;
    }
    if(answer.size() != 0)
        return answer;
    else
        return {-1};
}