#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            return binarySearch(arr, mid + 1, high, key);
        else
            return binarySearch(arr, low, mid - 1, key);
    }
    return -1;
}

int main() {
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Element At Index %d : ",i);
        scanf("%d",&arr[i]);
    }

    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
