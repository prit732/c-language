#include <stdio.h>

int main() {
    // Define weights and quantities for each item
    int weight_item1 = 25;
    int num_item1 = 5;
    int weight_item2 = 35;
    int num_item2 = 4;

    // Calculate total weight for each item
    int total_weight_item1 = weight_item1 * num_item1;
    int total_weight_item2 = weight_item2 * num_item2;

    // Calculate total weight
    int total_weight = total_weight_item1 + total_weight_item2;

    // Calculate total quantity of items
    int total_quantity = num_item1 + num_item2;

    // Print results
    printf("Total weight of item1: %d\n", total_weight_item1);
    printf("Total weight of item2: %d\n", total_weight_item2);
    printf("Total weight of all items: %d\n", total_weight);
    printf("Total quantity of items: %d\n", total_quantity);


}