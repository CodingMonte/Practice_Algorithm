#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0,temp = 0;
    for(int i = 0; i < k; i++)
    {
        temp = i * 2;
        while(temp >= numbers.size())
            temp -= numbers.size();
        answer = numbers[temp];
        
    }
    return answer;
}