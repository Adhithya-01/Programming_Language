#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, radius;
    float diff;
    printf("Enter the center co-ordinates of the circle: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Enter the point co-ordinates: ");
    scanf("%d %d", &x2, &y2);
    diff= sqrt(pow(x2-x1, 2)+pow(y2-y1,2));
    if(diff>radius)
        printf("Point (%d,%d) lies outside the circle.", x2, y2);
    else
        printf("Point (%d,%d) lies inside the circle.", x2, y2);
    return 0;
}