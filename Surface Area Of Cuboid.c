

#include <iostream>

int main()
{
   int surface,LB,BH,LH;
   printf("Enter the LB\n");
   scanf("%d",&LB);
   printf("Enter the BH\n");
   scanf("%d",&BH);
   printf("Enter the LH\n");
   scanf("%d",&LH);
   printf("finding the surface\n");
   surface=2*(LB+BH+LH);
   printf("surface Area Of Cuboid is:%d",surface);
    return 0;
}
