#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2,sum,intDiff;
    float firstFloat,secondFloat,floatSum,floatDiff;

    scanf("%d %d", &n1, &n2);
    scanf("%f %f", &firstFloat, &secondFloat);

    sum = n1 + n2;
    intDiff = n1 - n2;
    floatSum = firstFloat + secondFloat;
    floatDiff = firstFloat - secondFloat;

    printf("%d %d\n", sum, intDiff);
    printf("%.1f %.1f", floatSum, floatDiff);

    return 0;
}