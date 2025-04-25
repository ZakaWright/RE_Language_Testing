#include <stdio.h>

int main() {
    // for loop array
    printf("For loop:\n");
    int arr[] = {0, 1, 2, 3};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arr_length; i++) {
        printf("\t%d\n", arr[i]);
    }

    printf("\nWhile loop:\n");
    // while loop
    int j = 0;
    while (j < 4) {
        printf("\t%d\n", j);
        j++;
    }

    printf("\nDo while loop:\n");
    int k = 0;
    do {
        printf("\t%d\n", k);
        k++;
    } while (k < 4);
  
    
}