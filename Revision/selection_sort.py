def selection_sort(arr):
    n = len(arr)
    for i in range (n):
        min_ele = i #not arr[0], because it will always update to arr[0], we dont want that
        for j in range(i+1, n):
            if arr[j] < arr[min_ele]:
                min_ele = j
        arr[i], arr[min_ele] = arr[min_ele], arr[i] #swapping current element with actual minimum element found

def main():
    arr = list(map(int, input("Enter the elements of array separated by spaces").split()))
    print("Original array: ", arr)
    selection_sort(arr)
    print("sorted array: ", arr)

    print(arr[4])

if __name__ == "__main__":
    main()




