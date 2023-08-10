#include <stdio.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {

    for(int i = 0; i < queries_rows;i++)
        for(int j = 0; j < arr_len;j++)
            if(j >= queries[i][0] && j <= queries[i][1])
                arr[j]++;

    return arr;
}