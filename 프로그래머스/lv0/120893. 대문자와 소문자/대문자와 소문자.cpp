#include <string>
#include <vector>

using namespace std;

string solution(string my) {
    for(int i = 0; i < my.length(); i++)
    {
        if(my[i] >= 'a' && my[i] <= 'z')
            my[i] = my[i] - 32;
        else if(my[i] >= 'A' && my[i] <= 'Z')
            my[i] = my[i] + 32;
    }
    return my;
}