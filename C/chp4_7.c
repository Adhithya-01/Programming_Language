//Adhithya.C(21002)
#include <stdio.h>
#include <math.h>
int main(){
    int red,green,blue;
    float w,c,m,y,bl;
    printf("Enter the values");
    scanf("%d,%d,%d",&red,&green,&blue);
    if(red>=0 && red<=255 && green>=0 && green<=255 && blue>=0 && blue<=255 )
    {
        if(red/255>green/255 && red/255>blue/255)
            w=red/255;
        else if(blue/255>red/255 && blue/255>green/255)
            w=blue/255;
        else
            w=green/255;
        c=(w-(red/255))/w;
        m=(w-(green/255))/w;
        y=(w-(blue/255))/w;
        bl=1-w;
        printf("Value of cyan:%f",c);
        printf("Value of magenta:%f",c);
        printf("Value of yellow:%f",c);
        printf("Value of black:%f",c);

    }
    else 
        printf("Invalid Inputs");
    return 0;

}