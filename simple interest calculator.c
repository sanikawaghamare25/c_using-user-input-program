
#include <stdio.h>

int main()
{
    printf("simple interest calculator\n\n");
    int p,r,t,interest;
    printf("Enter the p \n");
    scanf("%d",&p);
    printf("Enter the r \n");
    scanf("%d",&r);
    printf("Enter the t \n");
    scanf("%d",&t);
    printf("finding the interest\n\n");
    interest=(p*r*t)/100;
    printf("simple interest calculator is: %d",interest);


    return 0;
}
