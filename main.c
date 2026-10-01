#include <stdio.h>

int main()
{
    int c;
    int count = 0;

    printf("input a string: ");

    while ( (c = getchar() ) != '\n' )
    {
        if (c >= '0' && c <= '9')
        {
            count++;
        }
    }
    
    printf("the number of digits is %d\n", count);

    return 0;
}
