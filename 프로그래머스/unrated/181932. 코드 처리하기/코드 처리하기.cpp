#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    
    int mode = 0;
    for (size_t i = 0; i < code.size(); i++) {

        if (code[i] == '1') 
        {
            mode = 1 - mode; 
        }
        else 
        {
            if ((mode == 1 && i % 2 == 1) || (mode == 0 && i % 2 == 0)) {
                answer += code[i];
            }
        }
    }
     if (answer.empty()) {
        return "EMPTY";
    }
    return answer;
}