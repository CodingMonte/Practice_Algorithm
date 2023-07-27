#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num) {
    int end = num.size() - 1;
    if(num[end] > num[end -1])
        num.push_back(num[end] - num[end - 1]);
    else
        num.push_back(num[end]*2);
    return num;
}