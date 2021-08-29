#include <iostream>

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = *a;
}

void bubble_sort(int array[],  int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[i]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}

int main() {

    int array[] = {1, 10, 2, 5, 7, 8, 15, 10};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Before sorting: ";
    print_array(array, size);

    std::cout << "After sorting: ";
    bubble_sort(array, size);
    print_array(array, size);

    return 0;
}