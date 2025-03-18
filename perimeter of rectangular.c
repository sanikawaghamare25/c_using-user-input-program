
#include <stdio.h>

int main()
{
    printf("Perimeter Of Rectangular\n");
    int lenght,breadth,Perimeter;
    printf("Enter the lenght\n");
    scanf("%d",&lenght);
    printf("Enter the breadth\n");
    scanf("%d",&breadth);
    printf("finding the Perimeter\n");
    Perimeter=(lenght*breadth)*2;
    printf("calculate the Perimeter of Rectangular is: %d",Perimeter);

    return 0;
}
