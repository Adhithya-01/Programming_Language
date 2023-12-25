#include<stdio.h>
int main()
{
    int n,i,temp=0;
    printf("Enter the 5-digit number : ");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        temp+=(n%10);
        n/=10;
    }
    temp+=n;
    printf("Sum of the digit = %d",temp);
    return 0;
}
