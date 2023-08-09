#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<vector<int>> makeSNAIL(int num,int init,int n,int max_num,vector<vector<int>> snail)
{
    for(int i = init; i <= n - 1; i++)
    {
        snail[i][init/2] = ++num;
        if(num == max_num)
            return snail;
    }
    for(int i = init+1; i <= n - 1;i++)
    {
        snail[n-1][i - init/2] = ++num;
        if(num == max_num)
            return snail;
    }
    for(int i = n-1; i > init + 1;i--)
    {
        snail[i-1][i-1-init/2] = ++num;
        if(num == max_num)
            return snail;
    }
    return makeSNAIL(num,init+2,n-1,max_num,snail);
}
vector<int> solution(int n) {
    vector<int> answer;
    int number = 0;
    for(int i = 1; i <=n;i++)
        number += i;
    
    vector<vector<int>> snail(n);
    for(int i = 0; i< n;i++)
        for(int j = 0; j <=i;j++)
            snail[i].push_back(0);
    
    snail = makeSNAIL(0,0,n,number,snail);
    for(int i = 0; i < n; i++)
        for(int j = 0; j <= i; j++)
            answer.push_back(snail[i][j]);
    
    return answer;
}