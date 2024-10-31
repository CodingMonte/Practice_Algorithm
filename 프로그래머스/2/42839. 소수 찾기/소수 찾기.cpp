#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

using namespace std;
bool isPrime(int n)
{
    if(n == 1 || n == 0)
        return false;
    if(n == 2)
        return true;
    else if(n % 2 == 0)
        return false;
    
    for(int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return false;
    return true;
}

int solution(string numbers) 
{
    sort(numbers.begin(), numbers.end());
    set<int> s;
    do{
        for(int i = 0; i < numbers.size(); i++)
        {
            int temp = stoi(numbers.substr(0,i + 1));
            if(isPrime(temp))
            {
                s.insert(temp); 
                cout << temp << endl;
            }
        }
    } while(next_permutation(numbers.begin(), numbers.end()));
            
    return s.size();
}