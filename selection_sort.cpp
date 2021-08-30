#include <iostream>

// Function to swap 
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;
    *a = temp;
}

// Function to sort the array
void selection_sort(int array[], int size) {
    // Iterating the array
    for (int i = 0; i < size; i++) {
        // variable to keep track of the minimum element
        int min_index = i;
        // Iterating over i + 1 until the end of the array
        for (int j = i + 1; j < size; j++) {
            // if any element is lesser than the element at min_index
            if (array[min_index] > array[j]) {
                // change the min_index to the smaller element
                min_index = j;
            }
        }
        // Swap the element at i with element at min_index
        swap(&array[min_index], &array[i]);
    }
}

// Function to print the array
void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {

    // array
    int array[] = {1, 10, 2, 15, 22, 14, 13, 18, 22};
    // Size of the array
    int size = sizeof(array) / sizeof(array[0]);

    // printing the array
    std::cout << "Before sorting: ";
    print_array(array, size);

    // printing the sorted array
    std::cout << "After sorting: ";
    selection_sort(array, size);
    print_array(array, size);

    return 0;
}