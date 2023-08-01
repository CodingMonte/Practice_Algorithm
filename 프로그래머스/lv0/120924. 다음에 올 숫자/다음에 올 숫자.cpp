#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    vector<double> ari;
    vector<double> geo;
    for(int i = 1; i < common.size();i++)
    {
        ari.push_back((double)common[i] - (double)common[i - 1]);
        geo.push_back((double)common[i]/(double)common[i-1]);
        
    }
    double ari_1st = ari[0];
    double geo_1st = geo[0];
    int flag = 0;
    for(int num : ari)
    {
        if(num != ari_1st)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        return common[common.size() - 1] + (int)ari_1st;
    flag = 0;
    
    for(int num : geo)
    {
        if(num != geo_1st)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        return common[common.size() - 1] * (int)geo_1st;
}