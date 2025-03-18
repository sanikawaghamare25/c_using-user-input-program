
#include <stdio.h>

int main()
{
    printf("BMI calculator");
    int weight,height,BMI;
    printf("Enter the weight\n");
    scanf("%d",&weight);
    printf("Enter the height\n");
    scanf("%d",&height);
    printf("finding the BMI \n");
    BMI=weight/height*height;
    printf("BMI calculator is: %d",BMI);

    return 0;
}
