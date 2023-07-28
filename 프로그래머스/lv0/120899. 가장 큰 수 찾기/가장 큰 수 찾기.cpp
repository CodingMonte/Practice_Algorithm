#include <string>
#include <vector>
#include <algorithm>
#define all(x) x.begin(),x.end()

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    auto iter = max_element(all(array));
    answer.push_back(*iter);
    answer.push_back(distance(array.begin(),iter));
    return answer;
}