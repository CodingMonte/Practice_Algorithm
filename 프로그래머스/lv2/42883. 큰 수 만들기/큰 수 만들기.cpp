#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string number, int k) {
    
for(int i = 1; i < number.size();i++)
{
    if(number[i - 1] < number[i] && k >= 1)
     {
        number.erase(i-1,1);
        k--;
        i = 0;
     }
     else if(k == 0)
         break;
}
    
if(k > 0)
    number.erase(number.size()-k,k);
    
    return number;
}