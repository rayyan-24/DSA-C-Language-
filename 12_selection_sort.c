#include <stdio.h>
int main()
{
    int i, num, arr1[20], j, min, k, temp;
    printf("Enter The number of Elements: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter %d Element: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (j = 0; j < num-1; j++)
    {
        min = j;
        for (k = j + 1; k < num; k++)
        {
            if (arr1[k] < arr1[min])
            {
                min = k;
            }
        }
        if (min != j)
        {
            temp = arr1[min];
            arr1[min] = arr1[j];
            arr1[j] = temp;
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}