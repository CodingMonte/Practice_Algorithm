#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;
map<char,int> result;
void score(string survey, int num)
{
    switch(num)
    {
        case 1:
            result[survey[0]] += 3;
            break;
        case 2:
            result[survey[0]] += 2;
            break;
        case 3:
            result[survey[0]] += 1;
            break;
        case 4:
            result[survey[0]] += 0;
            result[survey[1]] += 0;
            break;
        case 5:
            result[survey[1]] += 1;
            break;
        case 6:
            result[survey[1]] += 2;
            break;
        case 7:
            result[survey[1]] += 3;
            break;
        default:
            break;
            
    }
}
string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
 
    for(int i = 0; i < survey.size(); i++)
    {
        score(survey[i],choices[i]);
    }
    
    if(result['R'] >= result['T'])
        answer += 'R';
    else
        answer+= 'T';
    if(result['C'] >= result['F'])
        answer += 'C';
    else
        answer += 'F';
    if(result['J'] >= result['M'])
        answer += 'J';
    else
        answer += 'M';
    if(result['A'] >= result['N'])
        answer += 'A';
    else
        answer += 'N';
    return answer;
}