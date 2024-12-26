def bubble_sort(arr):
    n = len(arr)
    print(n)
    for i in range(n-1):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                print(arr)
        
        print("\n")
def main():
    arr = list(map(int, input("Enter the elements of array separated by spaces").split()))
    print("Original array: ", arr)
    bubble_sort(arr)
    print("sorted array: ", arr)

    

if __name__ == "__main__":
    main()
