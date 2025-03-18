
#include <stdio.h>

int main()
{
    printf("Compound Interest calculator\n");
    int p,r,t,n,CI;
    printf("Enter the p\n");
    scanf("%d",&p);
    printf("Enter the r\n");
    scanf("%d",&r);
    printf("Enter the t\n");
    scanf("%d",&t);
    printf("Enter the n\n");
    scanf("%d",&n);
    printf("finding the CI is:\n");
    CI=p*(1+r/n)^(n*t);
    printf("Compound Interest calculator is : %d",CI);

    return 0;
}
