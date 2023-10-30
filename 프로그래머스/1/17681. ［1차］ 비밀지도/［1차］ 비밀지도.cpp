#include <string>
#include <vector>

using namespace std;
string DtoB(int decimal,int n)
{
    string binary = "";
    while(decimal > 0)
    {
        int bit = decimal % 2;
        binary = to_string(bit) + binary;
        decimal /= 2;
    }
    if(binary.size() < n)
    {
        while(binary.size() != n)
        {
            binary = '0' + binary;
        }
    }
    return binary;
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n,string(n,' '));
    for(int i = 0; i < n; i++)
    {
        string binary1 = DtoB(arr1[i],n);
        string binary2 = DtoB(arr2[i],n);
        for(int j = 0; j < binary1.size();j++)
            if(binary1[j] == '1' || binary2[j] == '1')
                answer[i][j] = '#';
    }
    return answer;
}