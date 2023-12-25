#include<stdio.h>
int main()
{
    int sal,hrs,da,gs;
    printf("Enter the salary :");
    scanf("%d",&sal);
    hrs=(sal/100)*20;
    da=(sal/100)*40;
    gs=sal+hrs+da;
    printf("Gross Salary = %d",gs);
    return 0;
}