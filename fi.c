#include<stdio.h>

int main(){
    float p,r,n;

    printf("Enter the price : ");
    scanf("%f",&p);

    printf("Enter the rate : ");
    scanf("%f",&r);

    printf("Enter the month : ");
    scanf("%d",&n);

    printf("%f",p*r*n/100);
}