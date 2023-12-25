#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three angle of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180)
        printf("Valid");
    else 
        print("Not valid");
    return 0;
}