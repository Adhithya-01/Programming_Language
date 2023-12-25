#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp=0;
    printf("Enter the 5-digit number : ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        temp+=(n%10);
        n/=10;
    }
    printf("Sum of the digit = %d",temp);
    return 0;
}
