#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;

    int index = 0;
    while (index < section.size()) {
        int roller_start = section[index] - 1;
        int roller_end = roller_start + m - 1;
        // 롤러 끝길이 안에 section[index]가 포함 되면 계속칠함
        while (index < section.size() && section[index] - 1 <= roller_end) {
            index++;
        }
        // 롤러 시작과 끝점 사이에 section[index]가 존재하지 않으면 while문 끝냄
        answer++;
    }

    return answer;
}