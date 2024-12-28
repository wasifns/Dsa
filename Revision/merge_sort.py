# Recursive Merge Sort Implementation
def merge_sort_recursive(arr):
    if len(arr) > 1:
        mid = len(arr) // 2

        # Splitting the array into two halves
        left_half = arr[:mid]
        right_half = arr[mid:]

       
        merge_sort_recursive(left_half)
        merge_sort_recursive(right_half)

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

            
# Iterative Merge Sort Implementation
def merge_sort_iterative(arr):
    n = len(arr)
    current_size = 1

    # Iteratively merge subarrays of size current_size
    while current_size < n:
        for left_start in range(0, n, 2 * current_size):
            mid = min(left_start + current_size - 1, n - 1)
            right_end = min(left_start + 2 * current_size - 1, n - 1)

            # Merge subarrays [left_start...mid] and [mid+1...right_end]
            merge(arr, left_start, mid, right_end)

        current_size *= 2


def merge(arr, left_start, mid, right_end):
    left = arr[left_start:mid + 1]
    right = arr[mid + 1:right_end + 1]

    i = j = 0
    k = left_start

    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1

    while i < len(left):
        arr[k] = left[i]
        i += 1
        k += 1

    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1
