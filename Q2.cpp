#include <stdio.h>

void addToArray(void* arr, int size) {
    int* intArr = (int*)arr;
    for (int i = 0; i < size; i++) {
        intArr[i] += 1;
    }
}

int main() {
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    addToArray((void*)arr, size);

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
