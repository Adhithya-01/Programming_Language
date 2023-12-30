//Adhithya.C(21002)
#include <stdio.h>
#include <math.h>
int main(){
    int x, y, z;
    printf("Enter the sides of the triangle:");
    scanf("%d,%d,%d",&x,&y,&z);
    if (y==x && y==z)
        printf("Equivalent triangle");
    else if (x==y || y==z || x==z)
        printf("Isosceles triangle");
    else if (pow(x,2)+pow(y,2)==pow(z,2) || pow(x,2)+pow(z,2)==pow(y,2) || pow(z,2)+pow(y,2)==pow(x,2))
        printf("right angled triangle");
    else 
        printf("scalene triangle");
    return 0;
}