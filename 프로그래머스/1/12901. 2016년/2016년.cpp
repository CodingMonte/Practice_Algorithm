#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> day = {31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> Dotweek = {"FRI", "SAT","SUN", "MON", "TUE", "WED", "THU"};
    int Nowday = 0;
    for(int i = 0; i < a - 1;i++)
        Nowday += day[i];
    Nowday += b - 1;
    answer = Dotweek[Nowday % 7];
    return answer;
}