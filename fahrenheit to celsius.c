
#include <stdio.h>

int main()
{
    int fahrenheit,celsius;
    
    printf("Enter the fahrenheit\n");
    scanf("%d",&fahrenheit);
    
    printf("finding the celsius is:\n\n");
    celsius=(fahrenheit-32)*5/9;
    printf("fahrenheit to celsius is: %d",celsius);

    return 0;
}
