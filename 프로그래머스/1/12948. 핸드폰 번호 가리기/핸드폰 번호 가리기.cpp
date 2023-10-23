#include <string>
#include <vector>

using namespace std;

string solution(string p) {
    p.replace(0,p.size()-4,p.size()-4,'*');
    return p;
}