#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n<0)
        n*=(-1);
    printf("Absolute value = %d",n);
    return 0;
}