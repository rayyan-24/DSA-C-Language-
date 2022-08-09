#include <stdio.h>
void selection_sort(int *arr,int n)
{
     int min,temp;
     for (int i = 0; i < n-1; i++)
     {
         min=i;
         for (int j = i+1; j < n; j++)
         {
             if (arr[j]<arr[min])
             {
                 min=j;
             }
         }
         temp=arr[i];
         arr[i]=arr[min];
         arr[min]=temp;
     }
}
int main()
{
    int arr[10] = {1, 5, 7, 4, 6};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    selection_sort(arr, 5);
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

