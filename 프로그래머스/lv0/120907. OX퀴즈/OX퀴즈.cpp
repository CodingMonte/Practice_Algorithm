#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(int i = 0; i < quiz.size();i++)
    {
       vector<string> math;
        int temp = 0, flag = 0, num;
        stringstream ss(quiz[i]);
        string word;
        while(ss >> word)
            math.push_back(word);
    
        for(string m : math)
        {
            try
            {
                if(flag == 1)
                {
                    num = stoi(m);
                    temp += num;
                    flag = 0;
                }
                else if(flag == -1)
                {
                    num = stoi(m);
                    temp -= num;
                    flag = 0;
                }
                else if(flag == 0)
                {
                    num = stoi(m);
                    temp = num;
                }
                else if(flag ==2)
                {
                    if(temp == stoi(m))
                        answer.push_back("O");
                    else
                        answer.push_back("X");
                }
            }
            catch(const invalid_argument& e)
            {
                if(m == "-")
                    flag = -1;
                else if(m == "+")
                    flag = 1;
                else if(m == "=")
                    flag = 2;
            }
        } 
    }
    
    return answer;
}