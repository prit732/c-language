#include <stdio.h>

int main() {
    

   
    for (int row = 0; row < 5; row++) {
      
        for (int col = 0; col < 5 - row; col++) {
        
            if ((row + col) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
       
        printf("\n");
    }

}
