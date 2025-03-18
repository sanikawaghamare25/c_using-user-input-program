
#include <stdio.h>

int main()
{
    float pi,radius,height,surface;
    printf("Enter the pi\n");
    scanf("%d",&pi);
    printf("Enter the radius\n");
    scanf("%d",&radius);
    printf("Enter the height\n");
    scanf("%d",&height);
    printf("finding the surface \n");
    surface=2*3.14*radius*radius+height;
    printf("surface Area of Cylinder is:%d",surface);

    return 0;
}
