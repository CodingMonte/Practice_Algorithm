#include <string>
#include <vector>

using namespace std;
void Qsort(vector<int>& arr, int start, int end)
{
    if(start >= end)
        return;
    int i,j,key;
    
    key = start;
    i = start + 1;
    j = end;
    
    while(i <= j)
    {
        while(i <= end  && arr[start] <= arr[i])
            i++;
        while(arr[start] >= arr[j] && j > start)
            j--;
        if(i > j)
        {
            swap(arr[j], arr[key]);
        }
        else
        {
            swap(arr[i], arr[j]);
        }
        Qsort(arr,start,j - 1);
        Qsort(arr,j + 1,end);
        
    }
}
int solution(vector<int> array) {
    int end = array.size() - 1;
    Qsort(array, 0, end);
    int mid = end/2;
    
    
    return array[mid];
}