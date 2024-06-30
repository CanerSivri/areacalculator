#include <stdio.h>

double calculateArea(double n, double h) {
    return (n * h) / 2;
}

int main() {
    double floor, height;
    printf("Please enter your triangle's floor and height respectively: ");
    scanf("%lf %lf", &floor , &height);

    double area = calculateArea(floor, height);
    printf("Your triangle's area is %lf.\n", area);
    return 0;
}
