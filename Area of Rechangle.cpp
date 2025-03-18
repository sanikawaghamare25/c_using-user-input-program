
#include <stdio.h>

int main()
{
    printf("Area Of Rectangle\n");
    int lenght,width,Area;
    printf("Enter the lenght\n");
    scanf("%d",&lenght);
    printf("Enter the width\n");
    scanf("%d",&width);
    
    printf("finding the value of Area:\n");
    Area=lenght*width;
    printf("Area of Rectangle is:%d",Area);
    

    return 0;
}
