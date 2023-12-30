//Sdhithya,C(21002)
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            if(b+c>a)
                printf("Valid");
        }
    }
    else
    {
        if(b>c)
        {
            if(a+c>b)
                printf(valid);
        }
        else
        {
            if(a+b>c)
                printf("Valid");
        }
    }
    return 0;
}