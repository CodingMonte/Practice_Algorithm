#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    num = abs(num);
    if(num % 2 == 1)
        return "Odd";
    else
        return "Even";
}