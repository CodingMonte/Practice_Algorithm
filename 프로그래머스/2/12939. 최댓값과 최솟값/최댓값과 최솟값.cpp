#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);     // stringstream 선언
    int n;                  // stream에서 데이터를 받을 놈들
    vector<int> num;
    while(ss >> n)          // 위에서 말했던 while 문!!
        num.push_back(n);
    
    // 최댓값과 최솟값이 담긴 iterator 추출
    auto Max = max_element(num.begin(), num.end());
    auto Min = min_element(num.begin(), num.end());
    // 포인터를 사용하여 iterator에 있는 값을 answer에 저장
    answer = to_string(*Min) + " " + to_string(*Max);
    
    return answer;
}