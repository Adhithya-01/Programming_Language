#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,wcf;
    printf("Enter the velocity and temperature : ");
    scanf("%f %f",&v,&t);
    wcf=35.74+(0.6215*t)+((0.4275*t)- 35.75)*pow(v,0.16);
    printf("Wind Chill Factor : %.2f",wcf);
    return 0;
}
