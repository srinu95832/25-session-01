#include <stdio.h>
int main() {
   int n, arr[100];
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   printf("Enter the elements of the array: ");
   for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   printf("Negative numbers in the array: ");
   for(int i = 0; i < n; i++) {
      if(arr[i] < 0) {
         printf("%d ", arr[i]);
      }
   }
   return 0;
}

