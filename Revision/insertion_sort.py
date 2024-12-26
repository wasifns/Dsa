def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i-1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

def main():
    arr = list(map(int, input("Enter elements of array\n").split()))
    print("Original array: ", arr)
    insertion_sort(arr)
    print("Sorted array ", arr)
        
if __name__ == "__main__":
    main()
        