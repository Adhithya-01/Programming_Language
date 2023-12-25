#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp=0;
    printf("Enter the 5-digit number : ");
    scanf("%d",&n);
    for(i=4;i>=0;i--)
    {
        temp+=((n%10)*pow(10,i));
        n/=10;
    }
    printf("Reverse of the digit = %d",temp);
    return 0;
}
