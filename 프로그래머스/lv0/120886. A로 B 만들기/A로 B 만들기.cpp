#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    map<const char,int> bef;
    map<const char,int> aft;
    
    for(char b : before)
        bef[b]++;
    for(char a : after)
        aft[a]++;
    
    if(bef == aft)
        return 1;
    else
        return 0;
}