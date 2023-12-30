//Adhithya.C(21002)
#include <stdio.h>
int main() 
{
    float wt, ht, bmi;
    printf("Enter weight in kilograms: ");
    scanf("%f",&wt);
    printf("Enter height in meters: ");
    scanf("%f",&ht);
    bmi=wt/(ht*ht);
    printf("BMI: %.2f\n", bmi);
    if (bmi < 15)
        printf("BMI Category: Starvation\n");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("BMI Category: Anorexic\n");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("BMI Category: Underweight\n");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("BMI Category: Ideal\n");
    else if (bmi >= 25 && bmi <= 25.9)
        printf("BMI Category: Overweight\n");
    else if (bmi >= 30 && bmi <= 30.9)
        printf("BMI Category: Obese\n");
    else if (bmi >= 40)
        printf("BMI Category: Morbidly Obese\n");
    else
        printf("BMI Category: Undefined\n");
    return 0;
}