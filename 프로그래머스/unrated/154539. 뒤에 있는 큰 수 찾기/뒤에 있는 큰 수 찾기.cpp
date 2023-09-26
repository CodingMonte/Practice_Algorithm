#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> num) {
    vector<int> answer(num.size(),-1);
    stack<int> st;
    for(int i = 0; i < num.size();i++)
    {
        while(!st.empty() && num[st.top()] < num[i])
        {
            answer[st.top()] = num[i];
            st.pop();
        }
        st.push(i);
    }
    return answer;
}