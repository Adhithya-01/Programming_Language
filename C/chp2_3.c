#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,sum;
    printf("Enter the three side of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    sum=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of trianlge = %f",sum);
    return 0;
}
