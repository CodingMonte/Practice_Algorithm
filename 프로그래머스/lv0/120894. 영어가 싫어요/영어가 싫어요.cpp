#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string temp;
    for(int i = 0; i < numbers.size();i++)
    {
        temp += numbers[i];
        if(temp == "one")
        {
            answer = answer *10 + 1;
            temp.clear();
        }
        else if(temp == "two")
        {
            answer = answer *10 + 2;
            temp.clear();
        }
        else if(temp == "three")
        {
            answer = answer *10 + 3;
            temp.clear();
        }
        else if(temp == "four")
        {
            answer = answer *10 + 4;
            temp.clear();
        }
        else if(temp == "five")
        {
            answer = answer *10 + 5;
            temp.clear();
        }
        else if(temp == "six")
        {
            answer = answer *10 + 6;
            temp.clear();
        }
        else if(temp == "seven")
        {
            answer = answer *10 + 7;
            temp.clear();
        }
        else if(temp == "eight")
        {
            answer = answer *10 + 8;
            temp.clear();
        }
        else if(temp == "nine")
        {
            answer = answer *10 + 9;
            temp.clear();
        }
        else if(temp == "zero")
        {
            answer = answer *10 + 0;
            temp.clear();
        }
    }
        
    return answer;
}