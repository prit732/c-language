#include<stdio.h>

int main() {
 
    float x, y, result;

 
    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("Enter value for y: ");
    scanf("%f", &y);

 
    result = (x + y) * (x + y);

 
    printf("The result of (%f + %f)2 is %f\n", x, y, result);


}