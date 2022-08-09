#include <stdio.h>
int binary_search(int arr[], int element, int size);
int main()
{

    int arr[] = {1, 4, 22, 63, 73, 77, 85, 90, 97, 105}, element, size = sizeof(arr) / sizeof(int), search_index;
    printf("Enter Element to Search\n");
    scanf("%d", &element);
    search_index = binary_search(arr, element, size);
    if (search_index == -1)
    {
        printf("Element Not Found\n");
    }
    else
    {
        printf("Element is found at %d index\n", search_index + 1);
    }
    return 0;
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
    return -1;
}
