#include<stdio.h>
#include<math.h>

int main(){
    float angle,angles;
    printf("Enter the angle : ");
    const float pi=3.14159;
    scanf("%f",&angle);
    angles=angle*(pi/180.0);
    printf("Sin(%.2f) = %.2f\n",angle,sin(angles));
    printf("Cos(%.2f) = %.2f\n",angle,cos(angles));
    printf("Tan(%.2f) = %.2f\n",angle,tan(angles));
    printf("Cosecant(%.2f) = %.2f\n",angle,1/(sin(angles)));
    printf("Secant(%.2f) = %.2f\n",angle,1/(cos(angles)));
    printf("Cot(%.2f) = %.2f\n",angle,1/(tan(angles)));
    return 0;
}
