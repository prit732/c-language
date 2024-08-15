#include<stdio.h>

int main(){

    float c,d;
    const float b = 0.10;

    printf("Enter of value : ");
    scanf("%f",&c);

    printf("Enter of height : ");
    scanf("%f",&d);

    printf("%.2f",b*(c*d));
}