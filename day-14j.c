#include <stdio.h>

int main() {
    int row,col ,num = 1, rows = 5;

    for(int row = 1; row <= 5; row++) {
        for(col = 1; col <= row; col++) {
            printf("%d ", num); 
            num++; 
        }
        printf("\n"); 
    }


}
