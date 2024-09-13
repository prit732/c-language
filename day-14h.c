#include <stdio.h>

int main() {
   

    for (int row = 0; row < 5; row++) {
       
        for (int col = row; col >= 0; col--) {
            printf("%c ",'A' + row - col);
        }
        printf("\n"); 
    }

    
}
