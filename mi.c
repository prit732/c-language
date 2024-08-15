#include<stdio.h>

int main(){
    const float pi = 3.14;
    float r;

    printf("Enter the radius : ");
    scanf("%f",&r);

    printf("%.1f",2*pi*r);
}