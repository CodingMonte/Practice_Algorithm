#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {

    my_string.erase(remove(my_string.begin(), my_string.end(), letter.at(0)), my_string.end());
    return my_string;
}