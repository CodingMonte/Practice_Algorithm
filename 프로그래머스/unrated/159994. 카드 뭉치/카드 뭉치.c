#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {

    char* answer = (char*)malloc(sizeof(char)*4);


    int index1 = 0, index2 = 0;
    
    strcpy(answer,"Yes");
    for (int i = 0; i < goal_len; i++)
    {
        if (index1 < cards1_len && strcmp(goal[i], cards1[index1]) == 0)
        {
            index1++;
        }
        else if (index2 < cards2_len && strcmp(goal[i], cards2[index2]) == 0)
        {
            index2++;
        }
        else
        {
            answer = strcpy(answer, "No");
            break;
        }

    }
    
    return answer;
}