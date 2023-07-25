#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string str = to_string(a) + to_string(b);
    answer = 2 * a * b > stoi(str) ? 2*a*b:stoi(str);
   
    
    
    return answer;
}