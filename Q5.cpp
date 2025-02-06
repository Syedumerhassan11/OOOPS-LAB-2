#include <stdio.h>
#include <string.h>

struct Person {
    int id;
    char name[50];
};

void sortById(struct Person arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].id > arr[j + 1].id) {
                struct Person temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortByName(struct Person arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].name[0] > arr[j + 1].name[0]) {
                struct Person temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printPersons(struct Person arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s\n", arr[i].id, arr[i].name);
    }
    printf("\n");
}

int main() {
    int n = 5;
    struct Person persons[5] = {
        {3, "Alice"},
        {1, "Charlie"},
        {5, "Bob"},
        {2, "Eve"},
        {4, "David"}
    };
    
    printf("Sorted by ID:\n");
    sortById(persons, n);
    printPersons(persons, n);
    
    printf("Sorted by Name (First Character):\n");
    sortByName(persons, n);
    printPersons(persons, n);
    
    return 0;
}

