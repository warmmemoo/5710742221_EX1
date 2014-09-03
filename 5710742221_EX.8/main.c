#include <stdio.h>
#include <math.h>
#define Di 2

int main()
{
    float x,y,z,Total,Sum;
    printf("The side length 1 : ");
    scanf("%f",&x);
    printf("The side length 2 : ");
    scanf("%f",&y);
    printf("The width : ");
    scanf("%f",&z);
    Sum = (x+y+z)/Di;
    Total = Sum*(Sum-x)*(Sum-y)*(Sum-z);
    printf("The triangle area = %f\n",sqrt(Total));
    return 0;

}
