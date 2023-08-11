#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int total = brown + yellow;
    
    if((int)sqrt(total) == sqrt(total))
    {
        for(int i = 0; i < 2; i++)
            answer.push_back((int)sqrt(total));
    }
    else
    {
        int num = (int)sqrt(total);
        while(1)
        {
            num++;
            if(total % num == 0 && total / num * 2 + num * 2 - 4 == brown)
            {
                answer.push_back(num);
                answer.push_back(total/num);
                break;
            }
        }
    }
    return answer;
}