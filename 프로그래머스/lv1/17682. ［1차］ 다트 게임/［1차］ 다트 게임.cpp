#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string dart) {
    int answer = 0;
    vector<string> result;
    vector<int> number;
    string temp;
    for(int i = 0; i < dart.size();i++)
    {
        temp = "";
        while(dart[i] >= '0' && dart[i] <= '9')
        {
            temp += dart[i];
            i++;
            if(!(dart[i] >= '0' && dart[i] <= '9'))
            {
                i--;
                break;
            }
        }
        while(dart[i] == 'S' || dart[i] == 'D' || dart[i] == 'T')
        {
            temp += dart[i];
            i++;
            if(!(dart[i] == 'S' || dart[i] == 'D' || dart[i] == 'T'))
            {
                i--;
                break;
            }
        }
        while(dart[i] == '*' || dart[i] == '#')
        {
            temp += dart[i];
            i++;
            if(!(dart[i] == '*' || dart[i] == '#'))
            {
                i--;
                break;
            }
        }
        result.push_back(temp);
    }
    int flag = -1;
    for(int i = 0; i < result.size();i++)
    {
        try 
        {
            int num1 = stoi(result[i]);
            number.push_back(num1);
            flag++;
        }
        catch (const invalid_argument& e) 
        {
            if(result[i] == "D")
                number[flag] *= number[flag];
            else if(result[i] == "T")
                number[flag] *= number[flag]*number[flag];
            else if(result[i] == "#")
                number[flag] *= -1;
            else if(result[i] == "*")
            {
                if(flag == 0)
                    number[flag] *= 2;
                else
                {
                    number[flag - 1] *= 2;
                    number[flag] *= 2;
                }
            }
        }
    }
    answer += number[0] + number[1] + number[2];
    return answer;
}