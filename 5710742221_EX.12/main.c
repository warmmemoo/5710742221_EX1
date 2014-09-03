#include <stdio.h>

int main()
{
    int Salary;
    float Tax;
    printf("Input Salary : ");
    scanf("%d",&Salary);
    Tax = Salary * 0.1;
    printf("Salary : %d\n",Salary);
    printf("Tax : %f",Tax);
    return 0;
}
