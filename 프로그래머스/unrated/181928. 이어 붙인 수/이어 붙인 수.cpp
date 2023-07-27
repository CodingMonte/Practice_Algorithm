#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num) {
    int even = 0;
    int odd = 0;
    for(int i = 0; i < num.size(); i++)
    {
        if(num[i] % 2 == 0)
            even = even*10+num[i];
        else
            odd = odd*10+num[i];
    }
    return even + odd;
}