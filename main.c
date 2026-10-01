#include <stdio.h>

int main()
{
    int a, b;
    char operator;
    
    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &operator, &b);

    if (operator == '+')
    {
        printf("the result is %d\n", a + b);
    }
    else if (operator == '-')
    {
        printf("the result is %d\n", a- b);
    }
    else if (operator == '*')
    {
        printf("the result is %d\n", a * b);
    }
    else if (operator == '/')
    {
        if (b != 0)
        {
            printf("the result is %d\n", a / b);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Error: Invalid operator.\n");
    }
    
    return 0;
}
