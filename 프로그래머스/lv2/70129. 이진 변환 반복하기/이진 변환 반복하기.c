#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* solution(const char* s) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    int length;
    int count_zero = 0, count_digit;
    int len = strlen(s);
    answer[1] = 0;

    for (int i = 0; i < len; i++)       // 문자열에서 0의 개수를 센 뒤 0을 빼고 남은 자리수를 len에 반환함
        if (s[i] == '0')
        {
            count_zero++;
            answer[1]++;
        }
    answer[0] = 1;
    len = len - count_zero;

    while (len != 1)
    {
        count_zero = 0; count_digit = 0;
        length = len;
        answer[0]++;
        while (length > 0) 
        {
            if ((length & 1) == 0) 
            {                       //0의 개수를 셈
                count_zero++;
                answer[1]++;
            }

            length >>= 1; count_digit++;
        }
        
        len = count_digit - count_zero;
    }
    return answer;
}