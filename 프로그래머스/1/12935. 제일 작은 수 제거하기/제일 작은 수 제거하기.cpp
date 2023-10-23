#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size() == 1)
        return {-1};
    int min = *min_element(arr.begin(),arr.end());
    auto it = find(arr.begin(),arr.end(),min);
    arr.erase(it);
    return arr;
}