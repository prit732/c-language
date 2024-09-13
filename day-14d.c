#include <stdio.h>

int main() {
 
    int rows = 5;

  
    for (int row = 5; row >= 1; row--) {
       
        for (int col = 1; col <= (rows - row + 1); col++) {
        
            printf("%d ", row);
        }
      
        printf("\n");
    }

   
}
