#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("Enter the amount : ");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n-100>=0)
        {
            temp+=1;
            n=n-100;
        }
        else if(n-50>=0)
        {
            temp+=1;
            n=n-50;
        }
        else if(n-10>=0)
        {
            temp+=1;
            n=n-10;
        }
        else if(n-5>=0)
        {
            temp+=1;
            n=n-5;
        }
        else if(n-2>=0)
        {
            temp+=1;
            n=n-2;
        }
        else if(n-1>=0)
        {
            temp+=1;
            n=n-1;
        }
        
    }
    printf("Number of notes = %d",temp);
    return 0;
}
