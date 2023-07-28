#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string my_string) {
    map<char, int> alpha;
    int flag = 0;
    for (char m : my_string)
        alpha[m]++;

    for (int i = 0; i < my_string.size(); i++)
    {
            while (alpha[my_string[i]] > 1)
            {
                size_t found = my_string.rfind(my_string[i]);
                my_string = my_string.substr(0, found) + my_string.substr(found + 1);
                alpha[my_string[i]]--;
            }
    }
    return my_string;
}