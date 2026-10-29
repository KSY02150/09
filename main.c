//배열 및 반복문 활용//
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i, average;
    int sum;
    int grade[SIZE];

    sum = 0;
    for(i=0;i<SIZE;i++)
    {
        printf("input student's score: ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    average = sum / SIZE;
    printf("average : %d\n", average);
    return 0;
}