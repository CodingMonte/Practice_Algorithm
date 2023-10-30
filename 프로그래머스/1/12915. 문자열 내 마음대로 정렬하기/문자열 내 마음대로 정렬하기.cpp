#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool NthIndex(const string &a, const string &b, int n) {
    if(a[n] == b[n])
        return a < b;
    else
        return a[n] < b[n];
}

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [n](const string &a, const string &b) {
        return NthIndex(a, b, n);
    });
    return strings;
}