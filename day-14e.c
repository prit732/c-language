#include <stdio.h>

int main() {
    int i, j, n = 5;

   
    for (int row = 1; row <= 5; row++) {
   
        for (int col = row; col <= 5; col++) {
            printf("%d ", col);
        }
     
        printf("\n");
    }

    
}
