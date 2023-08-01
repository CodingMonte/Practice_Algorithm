#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string pol) {
    string answer = "";
    vector<string> save;
    int xvalue = 0, cvalue = 0;
    
    istringstream ss(pol);
    string get;
    
    while(ss >> get)
    {
        save.push_back(get);
    }
    
    for(string v : save)
    {
        if(v == "x")
        {
            xvalue += 1;
        }
        else if(v.back() == 'x')
        {
            v.pop_back();
            xvalue += stoi(v);
        }
        else
        {
            try 
            {
                int num = stoi(v);
                cvalue += num;
            }
            catch (const invalid_argument& e) 
            {
                continue;
            }
        }
    }

    if(cvalue == 0 && xvalue != 0)
    {
        if(xvalue == 1)
            answer = "x";
        else
            answer = to_string(xvalue) + "x";
    }
    else if(xvalue == 0 && cvalue != 0)
        answer = to_string(cvalue);
    else if(xvalue == 0 && cvalue == 0)
        answer = "0";
    else
    {
        if(xvalue == 1)
            answer = "x + " + to_string(cvalue);
        else
            answer = to_string(xvalue) + "x + " + to_string(cvalue);
    }
    
    return answer;
}