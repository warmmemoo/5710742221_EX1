#include <stdio.h>

int main()
{
    int num;
    printf("Integer divisible by 7 \n");
    printf("Enter Number = ");
    scanf("%d",&num);
    if ((num%7)==0)
    {
        printf("Number Divisible");
    }
    else
    {
        printf("Number Indivisible");
    }
    return 0;
}
