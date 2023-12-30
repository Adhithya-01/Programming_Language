//Adhithya.C(21002)
#include<stdio.h>
int main()
{
    int h,s;
    float c;
    printf("Enter hardness, carbon content and tensile strength of the steel : ");
    scanf("%d %f %d",&h,&c,&s);
    if(h>50 && c<0.7 && s>5600)
        printf("Grade 10");
    else if(h>50 && c<0.7)
        printf("Grade 9");
    else if(c<0.7 && s>5600)
        printf("Grade 8");
    else if(h>50 && s>5600)
        printf("Grade 7");
    else if(h>50 || c<0.7 || s>5600)
        printf("Grade 6");
    else 
        printf("Gradee 5");
    return 0;
}