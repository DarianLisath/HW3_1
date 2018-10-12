#include <stdio.h>
#include <stdlib.h>
#include "showGrade.h"
int main()
{
    printf("Enter your score!");

    float score;
    scanf("%f", &score);

    showLetterGrade(score);

    return 0;
}

