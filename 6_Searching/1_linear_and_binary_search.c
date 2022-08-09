#include <stdio.h>
int linear_search(int arr[], int element, int size);
int binary_search(int arr[], int element, int size);
int main()
{
    // for linear search
    int arr1[] = {1, 4, 2, 6, 3, 7, 5, 0, 7, 5}, element1 = 5, size1 = sizeof(arr1) / sizeof(int), search_index1;
    // for binary search
    int arr2[] = {1, 4, 22, 63, 73, 77, 85, 90, 97, 105}, element2 = 63, size2 = sizeof(arr1) / sizeof(int), search_index2;
    // for linear search
    search_index1 = linear_search(arr1, element1, size1);
    printf("%d\n", search_index1);
    // for binary search
    search_index2 = binary_search(arr2, element2, size2);
    printf("%d\n", search_index2);
    return 0;
}
int linear_search(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int binary_search(int arr[], int element, int size)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
