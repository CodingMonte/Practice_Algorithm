#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt = 0, yCnt = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    auto it = find(s.begin(),s.end(),'y');
    while(it != s.end())
    {
        s.erase(it - s.begin(),1);
        yCnt++;
        it = find(s.begin(),s.end(),'y');
    }
    it = find(s.begin(),s.end(),'p');
    while(it != s.end())
    {
        s.erase(it - s.begin(),1);
        pCnt++;
        it = find(s.begin(),s.end(),'p');
    }
    return pCnt == yCnt ? true : false;
}