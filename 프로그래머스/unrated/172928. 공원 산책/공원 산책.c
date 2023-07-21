#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define length 50

int* solution(const char* park[], size_t park_len, const char* routes[], size_t routes_len) {
    int* answer = (int*)malloc(2 * sizeof(int));                        // dynamic memory

    char direction;
    int distance = 0, flag = 0;
    int X_pos = -1, Y_pos = -1;                                                   // position
    int i, j, k;
    for (Y_pos = 0; Y_pos < park_len; Y_pos++)                          // S의 position을 찾는 제어문
    {
        for (X_pos = 0; X_pos < strlen(park[0]); X_pos++)
        {
            if (park[Y_pos][X_pos] == 'S')
            {
                answer[0] = Y_pos;
                answer[1] = X_pos;
            }
        }
    }
    X_pos = answer[1];
    Y_pos = answer[0];

    for (i = 0; i < routes_len; i++)                                     // Tracking algorithm
    {
        sscanf(routes[i], "%c %d", &direction, &distance);
        flag = 0;
        printf("%c %d\n", direction, distance);
        if (direction == 'E')
        {
            for (k = 1; k <= distance; k++)
            {
                if (X_pos + k >= strlen(park[0]) || park[Y_pos][X_pos + k] == 'X')
                {
                    flag++;
                }
            }
            if (flag == 0)
            {
                X_pos = X_pos + distance;
            }
        }
        else if (direction == 'W')
        {
            for (k = 1; k <= distance; k++)
            {
                if (X_pos - k < 0 || park[Y_pos][X_pos - k] == 'X')
                {
                    flag++;
                }
            }
            if (flag == 0)
            {
                X_pos = X_pos - distance;
            }
        }
        else if (direction == 'S')
        {
            for (k = 1; k <= distance; k++)
            {
                if (Y_pos + k >= park_len || park[Y_pos + k][X_pos] == 'X')
                {
                    flag++;
                }
            }
            if (flag == 0)
            {
                Y_pos = Y_pos + distance;
            }
        }
        else if (direction == 'N')
        {
            for (k = 1; k <= distance; k++)
            {
                if (Y_pos - k < 0 || park[Y_pos - k][X_pos] == 'X')
                {
                    flag++;
                }
            }
            if (flag == 0)
            {
                Y_pos = Y_pos - distance;
            }
        }

    }

    answer[0] = Y_pos;
    answer[1] = X_pos;

    return answer;
}