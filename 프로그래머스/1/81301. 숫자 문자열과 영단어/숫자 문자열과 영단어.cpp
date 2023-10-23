#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int solution(string s) {
    
    for (int i = 0; i < 10; i++) {
        auto it = s.find(numbers[i]);
        while (it != string::npos) {
            s.replace(it, numbers[i].length(), to_string(i));
            it = s.find(numbers[i]);
        }
    }
    
    return stoi(s);
}