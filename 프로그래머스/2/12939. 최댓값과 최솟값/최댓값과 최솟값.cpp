#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    int n;
    vector<int> num;
    
    while(ss >> n)
        num.push_back(n);
    auto Max = max_element(num.begin(), num.end());
    auto Min = min_element(num.begin(), num.end());
    
    answer = to_string(*Min) + " " + to_string(*Max);
    
    return answer;
}