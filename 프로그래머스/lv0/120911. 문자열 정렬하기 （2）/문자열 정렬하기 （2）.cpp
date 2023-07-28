#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<int> num;
    for(int i = 0; i < my_string.size();i++)
    {
        if(my_string[i] >= 'A' && my_string[i] <= 'Z')
            my_string[i] += 32;
        num.push_back((int)my_string[i]);
    }
    sort(num.begin(), num.end());
    for(int i = 0; i < num.size(); i++)
        answer.push_back((char)num[i]);
    
    return answer;
}