int main() {
   
    for (int row = 0; row < 5; row++) {
      
       
        
       
        for (int space = 0; space > 0 - row; space--){
            printf("  "); 
        }
        for (int col = 1; col <= 5 - row; col++){
            printf("%d ", col);
        }

        
      
        printf("\n");
    }

 
}

