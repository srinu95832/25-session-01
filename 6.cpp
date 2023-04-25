#include <stdio.h>

int findMax(int *arr, int size);

int main() {
    int arr[100];
    int size;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = findMax(arr, size);
    
    printf("The maximum number is %d\n", max);
    
    return 0;
}

int findMax(int *arr, int size) {
    int *ptr = arr;
    int max = *ptr;
    
    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > max) {
            max = *ptr;
        }
    }
    
    return max;
}

