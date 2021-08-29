
def bubble_sort(array: list) -> list:
    for i in range(0, len(array)):
        for j in range(0, i + 1):
            if (array[j] > array[i]):
                array[i], array[j] = array[j], array[i]

    return array


array = [1, 10, 2, 5, 7, 11, 15]
print("Before sorting: ", array)

sorted_array = bubble_sort(array)
print("After sorting: ", sorted_array)