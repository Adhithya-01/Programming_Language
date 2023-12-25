#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,rev=0,dg;
    printf("Enter the 5 digit number : ");
    scanf("%d",&n);
    for(i=4;i>=0;i--)
    {
        dg=pow(10,i);
        rev=rev+((n%10)*dg);
        n=n/10;
    }
    printf("Reverse of the number = %d",rev);
    if(n==rev)
        printf("Both are equal");
    else 
        printf("Both are not equal");
    return 0;
}