#include<stdio.h>
void insertion_sort(int *arr,int n)
{
    int next,j;
    for (int i = 1; i <= n-1; i++)
    {
        next=arr[i];
        j=i-1;
        for (j = i-1; j >=0 && arr[j]>next; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=next;
    }
}
int main()
{
    int arr[10]={8,5,7,4,6};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    insertion_sort(arr,5);
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}