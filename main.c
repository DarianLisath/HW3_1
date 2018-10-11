#include <stdio.h>
#include <stdlib.h>
void showLetterGrade(float);
int main()
{
    printf("Enter your score!");

    float score;
    scanf("%f", &score);

    showLetterGrade(score);

    return 0;
}
void showLetterGrade(float score)
{
    if (score >= 94.0F)
    {
        printf("A");
    }
    else if (score >= 80.0F && score < 93.9F)
    {
        printf("B");
    }
    else if (score >= 70.0F && score < 79.9F)
    {
        printf("C");
    }
    else if (score >= 60.0F && score < 69.9F)
    {
        printf("D");
    }
    else if (score >= 0.0F && score < 59.9F)
    {
        printf("F");
    }
}
