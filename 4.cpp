#include <stdio.h>
int main() {
    int arr[100], n, i, search, pos = -1;
	printf("Enter the size of the array: ");
    scanf("%d", &n);
	 printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
		 printf("Enter the element to be searched: ");
    scanf("%d", &search);
	 for(i=0; i<n; i++) {
        if(arr[i] == search) {
            pos = i+1; 
            break;
        }
    }
	if(pos == -1)
        printf("Element not found.");
    else
        printf("Element %d found at position %d", search, pos);
		return 0;
}

