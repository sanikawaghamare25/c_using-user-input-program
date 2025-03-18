
#include <stdio.h>

int main()
{
    float pi,radius,height,volume;
    printf("Enter the pi\n");
    scanf("%f",&pi);
    printf("Enter the radius\n");
    scanf("%f",&radius);
    printf("Ënter the height\n");
    scanf("%f",&height);
    printf("finding the volume\n");
    volume=3.14*radius*radius+height;
    printf("volume of Cylinder is: %f",volume);
    return 0;
}
