#include <stdio.h>
void display(int arr[], int u_size);
int delete (int arr[], int index, int u_size);
int main()
{
    int arr[20] = {1, 7, 3, 5, 7, 3}, u_size = 6, index = 0;
    display(arr, u_size);
    delete (arr, index, u_size);
    u_size--;
    display(arr, u_size);
    return 0;
}
void display(int arr[], int u_size)
{
    for (int i = 0; i < u_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int delete (int arr[], int index, int u_size)
{
    for (int i = index; i < u_size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}