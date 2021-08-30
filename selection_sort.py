
"""
|----------------------------|
SORTING THE ARRAY: QUICK SORT|
|----------------------------|
"""

# Array sort function
def selection_sort(array):
    # Looping over the array
    for i in range(0, len(array)):
        # Variable to keep track of the minimum index
        min_index = i
        # Iterating over i + 1 elements until the end of the array
        for j in range(i + 1, len(array)):
            # if any element is smaller than the min index
            if (array[min_index] > array[j]):
                # Change the min_index
                min_index = j
        # Change the element at i to the element at min_index
        array[min_index], array[i] = array[i], array[min_index]

    # return sorted array
    return array

# Array
array = [10, 2, 15, 13, 11, 18, 20]
print("Before sorting: ", array)

# Sorted Array
sorted_array = selection_sort(array)
print("After sorting: ", sorted_array)