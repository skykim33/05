#include <stdio.h>

int main()
{
    int answer = 39;
    int guess;
    int trial = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &guess);
        
        if (guess < answer)
        {
            printf("low!\n");
        }
        else if (guess > answer)
        {
            printf("high!\n");
        }

        trial++;
    } while (guess != answer);

    printf("Congratulations! trials: %d\n", trial);

    return 0;
}
