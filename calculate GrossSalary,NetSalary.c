

#include <stdio.h>

int main()
{
    printf("Calculate GrossSalary and NetSalary\n");
    int bs,HRA,DA,deductions,GrossSalary,NetSalary;
    printf("Enter the bs\n");
    scanf("%d",&bs);
    printf("Enter the HRA\n");
    scanf("%d",&HRA);
    printf("Enter the DA\n");
    scanf("%d",&DA);
    printf("Enter the deductions\n");
    scanf("%d",&deductions);
    printf("finding the GrossSalary\n");
    GrossSalary=bs+HRA+DA;
    printf("Calculate the GrossSalary is: %d\n",GrossSalary);
    printf("finding the NetSalary\n");
    NetSalary=bs-deductions;
    printf("Calculate the NetSalary is : %d",NetSalary);
    
    return 0;
}
