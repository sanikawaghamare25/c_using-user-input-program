
#include <stdio.h>

int main()
{
    int A,p,r,t,n;
    printf("Enter the p\n");
    scanf("%d",&p);
    printf("Ente the r\n");
    scanf("%d",&r);
    printf("Enter the t\n");
    scanf("%d",&t);
    printf("Enter the n\n");
    scanf("%d",&n);
    printf("finding the A\n\n");
    A=p*(1+r/n)*n*t;
    printf("Compount Interest is:%d",A);

    return 0;
}
