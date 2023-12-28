#include <string>
#include <vector>
#include <stack>

using namespace std;

bool brackets(string& p)
{
    stack<char> st;
    bool flag = true;
    
    for(char c : p)
    {
        switch(c)
        {
            case ']':
                if(!st.empty() && st.top() == '[') st.pop();
                else flag = false;
                break;
            case '}':
                if(!st.empty() && st.top() == '{') st.pop();
                else flag = false;
                break;
            case ')':
            if(!st.empty() && st.top() == '(') st.pop();
            else flag = false;
            break;
            default:
                st.push(c);
                break;
        }
        if(!flag)
            break;
    }
    return st.empty() && flag;
}
int solution(string s) {
    
    int answer = 0;
    for(int i = 0; i < s.size(); i++)
    {
        string str = "";
        for(int j = 0; j < s.size();j++)
            str += s[(i + j) % s.size()];
        if(brackets(str))
            answer++;
    }
    return answer;
}