#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int n = elements.size();
    set<int> total;
    
    for (int i = 0; i < n; ++i) 
    {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += elements[(i + j) % n];
            total.insert(sum);
        }
    }

    return total.size();
}