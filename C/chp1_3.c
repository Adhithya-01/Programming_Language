#include<stdio.h>
int main()
{
    int i,arr[5],sum=0;
    float avg;
    for(i=0;i<5;i++)
    {
        printf("Enter the mark in subject_%d",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/5;
    printf("Aggregate Mark = %d",sum);
    printf("Percentage = %d",avg);
}
