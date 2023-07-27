#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void Q_sort(vector<int>& arr, int start, int end)
{
    if(start >= end)
        return;
    int i = start + 1;
    int j = end;
    int key = start;
    
    while(i <= j)
    {
        while(i <= end && arr[key] >= arr[i])
            i++;
        while(j > start && arr[key] <= arr[j])
            j--;
        if(i > j)
        {
            swap(arr[j],arr[key]);
        }
        else
        {
            swap(arr[i],arr[j]);
        }
    }
    Q_sort(arr,start, j - 1);
    Q_sort(arr,j + 1, end);
}
vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] >= '0' && my_string[i] <= '9' )
            answer.push_back(static_cast<int>(my_string[i] - '0'));
    }
    //Q_sort(answer,0,my_string.size() - 1);
    sort(answer.begin(),answer.end());
    return answer;
}