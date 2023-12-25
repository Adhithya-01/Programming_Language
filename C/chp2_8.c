#include<stdio.h>
#include<math.h>
int main()
{
    
    int a,b;
    printf("Enter any two number : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap of the given number : %d %d",a,b);
    return 0;
}
