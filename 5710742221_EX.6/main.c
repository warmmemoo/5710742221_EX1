#include <stdio.h>
#define TotalNumber 3

int main()
{
    float NumX,NumY,NumZ,Interest;
    printf("Enter X : ");
    scanf("%f",&NumX);
    printf("Enter Y : ");
    scanf("%f",&NumY);
    printf("Enter Z : ");
    scanf("%f",&NumZ);
    Interest = (NumX+NumY+NumZ)/TotalNumber;
    printf("The Average Number : %f",Interest);

    return 0;
}
