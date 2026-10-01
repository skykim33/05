#include <stdio.h>

int main()
{
    int num;

    printf("정수 하나를 입력하시오 :");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("절댓값은 %d 입니다.\n", num);
    }
    else
    {
        printf("절댓값은 %d 입니다.\n", -num);
    }

    return 0;
}
