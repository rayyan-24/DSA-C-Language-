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
    int arr[30],num;
    printf("Enter the number of elements to sort: ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Before Sorting\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d Element is %d: \n",i+1,arr[i]);
    }
    insertion_sort(arr,num);
    printf("After Sorting\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d Element is %d: \n",i+1,arr[i]);
    }
    printf("\n");
    return 0;
}