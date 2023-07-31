#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    while(chicken >= 10)
    {
        int service = chicken / 10;
        answer += service;
        chicken = chicken - service * 10 + service;
    }
    return answer;
}