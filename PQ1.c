#include <stdio.h>
int main()
{
    int arr[10],arr1[10];
    int i, j,dup = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter %d elements in array : ",i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                dup++;
                break;
            }
        }
    }
    printf("duplicate elements found in array = %d\n", dup);
    return 0;
}