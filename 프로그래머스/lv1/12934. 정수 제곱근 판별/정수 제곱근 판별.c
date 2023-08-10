#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    long double num,den;
    num = (long double)n;
    den = sqrt(n);
    if(num / den == den)
        return pow((int)(den + 1),2);
    return -1;
}