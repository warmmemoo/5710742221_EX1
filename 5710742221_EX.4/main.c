#include <stdio.h>
#define Day 365

int main()
{
    float principal,rate,interest;
    int days;
    printf("Enter loan principal(-1 to end): ");
    scanf("%f",&principal);
    printf("Enter integer rate: ");
    scanf("%f",&rate);
    printf("Enter term of the loan in days: ");
    scanf("%d",&days);
    interest = principal*rate*days/Day;
    printf("The interest charge is$ %f",interest);
    return 0;
}
