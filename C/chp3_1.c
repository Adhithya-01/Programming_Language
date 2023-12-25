#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter the Cost price : ");
    scanf("%f",&cp);
    printf("Enter the Selling price : ");
    scanf("%f",&sp);
    if(sp>cp)
        printf("He made a profit of Rs.%.2f",(sp-cp));
    else if(cp>sp)
        printf("He made a loss of Rs.%.2f",(cp-sp));
    else
        print("He made neither profit nor loss");
    return 0;
}