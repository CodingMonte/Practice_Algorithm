#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int pizza = 0;
    while(slice*pizza / n < 1)
        pizza++;
    return pizza;
}