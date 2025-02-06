#include <stdio.h>
#include <stdlib.h>

void resizeArray(int** arr, int* currentSize, int newSize) {
    *arr = (int*)realloc(*arr, newSize * sizeof(int));
    *currentSize = newSize;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <initial array size> <elements to add>\n", argv[0]);
        return 1;
    }

    int currentSize = atoi(argv[1]);
    int elementCount = 0;

    if (currentSize <= 0) {
        printf("Initial array size must be greater than 0.\n");
        return 1;
    }

    int* arr = (int*)malloc(currentSize * sizeof(int));

    printf("Initial array size: %d\n", currentSize);

    for (int i = 2; i < argc; i++) {
        int input = atoi(argv[i]);

        if (elementCount >= currentSize * 2) {
            printf("Resizing array to %d elements.\n", currentSize * 2);
            resizeArray(&arr, &currentSize, currentSize * 2);
        }

        arr[elementCount] = input;
        elementCount++;
    }

    if (elementCount < currentSize) {
        resizeArray(&arr, &currentSize, elementCount);
    }

    printf("Final array size: %d\n", currentSize);
    printf("Elements in array: ");
    for (int i = 0; i < elementCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
