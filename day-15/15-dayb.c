#include <stdio.h>

int main() {
    

   
    for (int row = 5; row >= 1; row--) {
       
        for (int col = row; col <= 5; col++) {
            printf("%d ", col);
        }

         for (int space = 0; space < 2 * row; space++) {
            printf("  "); 
        }
        for (int col = 1; col <= 5 - row; col++) {
            printf("%d ", col);
        }
      

     
      


        printf("\n");
    }

  
}
