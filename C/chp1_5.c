#include<stdio.h>
int main()
{
    float l,b,r;
    printf("Enter the lenght and breadth : ");
    scanf("%f %f",&l,&b);
    printf("Enter the radius : ");
    scanf("%f",&r);
    printf("Perimeter of rectangle : %.2f",((l+b)*2));
    printf("Area of rectangle : %.2f",(l*b));
    printf("Perimeter of circle : %.2f",(4*r));
    printf("Area of circle : %.2f",(r*r));
    return 0;
}
