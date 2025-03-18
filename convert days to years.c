
#include <stdio.h>

int main()
{
    printf("Convert Day to Year\n");
    int days,years;
    printf("Enter the days \n");
    scanf("%d",&days);
    printf("finding the years\n");
    years=days/365;
    printf("Days to years is: %d",years);

    return 0;
}
