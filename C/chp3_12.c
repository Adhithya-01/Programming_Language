#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the Co-ordinates x and y : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y>0)
        print("On Y-axis");
    if(y==0 && x>0)
        print("On X-axis");
    else
        print("On Origin");
    return 0;
}