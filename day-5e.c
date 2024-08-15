#include <stdio.h>

int main() {
    int a = 15;
    int b = 10;

   

  
    printf(" a = %d, b = %d\n", a, b);


    a = a + b; // 25
    b = a - b; // 25 - 10 = 15
    a = a - b; // 25 - 15 = 10


    printf("a = %d, b = %d\n", a, b);

    
}