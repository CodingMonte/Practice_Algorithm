#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string letter) {
    string answer = "";
    map<string, char> morse = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'}, {"..-.", 'f'},
        {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
        {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},
        {"...", 's'}, {"-", 't'}, {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
        {"-.--", 'y'}, {"--..", 'z'}
    };
    string m;
    
    for(auto spel : letter)
    {
        if(spel == ' ')
        {
            answer += morse[m];
            m ="";
        }
        else
        {
            m += spel;
        }
    }
    return answer+=morse[m];
}