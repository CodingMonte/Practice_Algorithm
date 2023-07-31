#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b) 
{
    int small_num = (a > b ? a : b);
    
    for(int i = 1; i <= small_num; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
        }
    }
    cout << a << " " << b << " "<< small_num <<endl;
    for(int i = 2; i <= b;i++)
    {
        if(b % i == 0)
        {
            if(!(i % 2  == 0 || i % 5 == 0))
                return 2;
        }
    }
    return 1;
}