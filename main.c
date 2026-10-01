#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    
    printf("input a number:");
    scanf("%d", &num);

    int i;
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("the result is %d\n", sum);

    return 0;
}
