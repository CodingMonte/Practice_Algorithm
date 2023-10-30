#include <vector>
#include <map>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0,cnt = 0;
    map<int,int> monster;
    for(int n : nums)
        monster[n]++;
    
    if(monster.size() == nums.size()/2)
        return monster.size();
    else if(monster.size() > (nums.size()/2))
        return nums.size()/2;
    else if(monster.size() < (nums.size()/2))
        return monster.size();
}