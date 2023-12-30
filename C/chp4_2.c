//Adhithya.C(21002)
#include<stdio.h>
int main()
{
    char n;
    printf("Enter any character : ");
    scanf("%s",&n);
    if(n>=65 && n<=91)
        printf("It is a Captial letter");
    else if(n>=97 && n<=122)
        printf("It is a Small letter");
    else if(n>=48 && n<=57)
        printf("It is a Number");
    else
        printf("It is a Special Character");
    return 0;
}