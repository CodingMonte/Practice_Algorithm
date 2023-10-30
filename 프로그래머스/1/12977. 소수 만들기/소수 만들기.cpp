#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

   for(int i = 0; i < nums.size() - 2;i++)
   {
       int temp = 0;
       for(int j = i + 1;j < nums.size() - 1;j++)
       {
           for(int k = j + 1; k < nums.size();k++)
           {
               temp = nums[i] + nums[j] + nums[k];
               int cnt = 0;
               for(int i = 2; i <= temp / 2; i++)
                   if(temp % i == 0)
                       cnt++;
               if(cnt == 0)
                   answer++;
           }
       }
   }

    return answer;
}