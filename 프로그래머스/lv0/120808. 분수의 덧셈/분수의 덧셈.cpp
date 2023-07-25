#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int num,den;
    
    num = numer1*denom2 + numer2*denom1;
    den = denom1 * denom2;
    int top = num;
    int bottom = den;
    int temp;
    
    while(top%bottom != 0)
    {
        temp = top % bottom;
        top = bottom;
        bottom = temp;
    }
    
    answer.push_back(num/bottom);
    answer.push_back(den/bottom);
    
    
    
    return answer;
}