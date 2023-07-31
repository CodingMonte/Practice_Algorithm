#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int i = 0; i < array.size(); i++)
    {
        while(1)
        {
            if(array[i] % 10 == 7)
                answer++;
            if(array[i] / 10 == 0)
                break;
            array[i] /= 10;
        }
    }
    return answer;
}