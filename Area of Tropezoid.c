
#include <stdio.h>

int main()
{
    printf("Area Of Tropezoid\n");
    int a,b,h,Area;
    printf("Enter the a\n");
    scanf("%d",&a);
    printf("Ente the b\n");
    scanf("%d",&b);
    printf("Enter the h\n");
    scanf("%d",&h);
    printf("finding the Area:\n");
    Area=(a/b)/2*h;
    printf("Area of Tropezoid is : %d",Area);
    

    return 0;
}
