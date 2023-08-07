#include <string>
#include <vector>
#include <sstream>
#include <algorithm>


using namespace std;

string solution(string s) {
    string answer = "";
    bool Odd = true;
    
    for (char c : s) 
    {
        if (c == ' ') 
        {
            Odd = true;
            answer += ' ';
        } 
        else 
        {
            if (Odd == true) 
                answer += toupper(c);
            else
                answer += tolower(c);
            Odd = !Odd;
        }
    }

    return answer;
}