#include <string>
#include <vector>
using namespace std;

int solution(vector<int> ingredient) {
    int answer1 = 0;
    int answer2 = 0;
    vector<int> bbang;
    int flag = 0;
    for(int n : ingredient)
    {
        bbang.push_back(n);
        int cnt = bbang.size();
        if(cnt >= 4 && bbang[cnt - 4] == 1 && bbang[cnt - 3] == 2 && bbang[cnt - 2] == 3 && bbang[cnt - 1] == 1)
        {
            if(flag)
            {
                answer1++;
                bbang.erase(bbang.end() - 4,bbang.end());
            }
            flag++;
        }
    }
    bbang.clear();
    for(int n : ingredient)
    {
        bbang.push_back(n);
        int cnt = bbang.size();
        if(cnt >= 4 && bbang[cnt - 4] == 1 && bbang[cnt - 3] == 2 && bbang[cnt - 2] == 3 && bbang[cnt - 1] == 1)
        {
                answer2++;
                bbang.erase(bbang.end() - 4,bbang.end());
        }
    }

    return answer1 >= answer2 ? answer1:answer2;
}