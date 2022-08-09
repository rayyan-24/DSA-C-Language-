#include <stdio.h>
int main()
{
    int arr1[10] = {5, 6, 4, 76, 9, 3, 78, 88}, val, i;
    printf("Enter value to search: ");
    scanf("%d", &val);
    for (i = 0; i < 10; i++)
    {
        if (arr1[i] == val)
        {
            printf("Element found at %d position\n", i + 1);
            break;
        }
    }
    if (i == 10)
    {
        printf("Element is not found\n");
    }

    return 0;
}