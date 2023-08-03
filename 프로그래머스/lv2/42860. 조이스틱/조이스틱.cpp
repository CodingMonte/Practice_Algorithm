#include <string>
#include <vector>
#include <iostream>

using namespace std;

int updown_min(char start, char end)
{
    int move1 = abs(start - end);
    int move2 = 26 - move1;
    return move1 > move2 ? move2 : move1;
}

int solution(string name) {
    int answer = 0;
    int cursor_count = name.size() - 1; // 오른쪽으로 한칸 씩 끝까지 감

    for(int i = 0; i < name.size();i++)
    {
        int next_idx = i + 1;
        while(next_idx < name.size() && name[next_idx] == 'A')
            next_idx++;
        int move = i + name.size() - next_idx + min(i, (int)name.size() - next_idx);
        cursor_count = min(cursor_count,move);
    }
    answer = cursor_count;
    for(char n : name)
    {
        answer += updown_min('A',n);
    }
    return answer;
}