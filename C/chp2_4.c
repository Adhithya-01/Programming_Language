#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float r,p;
    printf("Enter the co-ordinates value : ");
    scanf("%d %d",&x,&y);
    r=sqrt((x*x)+(y*y));
    p=atan(y/x);
    printf("Polar co-ordinates (%.2f,%.2f)",r,p);
    return 0;
}
