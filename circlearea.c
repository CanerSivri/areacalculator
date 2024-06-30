#include <stdio.h>
#include <math.h>

double calculateArea(double radius){
    return(M_PI*radius*radius);
}

int main(){
    double radius;
    printf("Please enter your circle's radius: ");
    scanf("%lf",&radius);

    double area= calculateArea(radius);
    printf("Your circle's area is %lf.",area);
    return 0;
}


