#include <stdio.h>
int arr[3][3], non_zero = 0;
void tri_diognal()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((i - j) > 1 || (j - i) > 1)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}
void isSparse()
{
    if (non_zero > 7)
        printf("Matrix is not sparse\n");
    else
    {
        printf("Matrix is sparse\n");
    }
}
int main()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Element: ");
            scanf("%d", &arr[i][j]);
            if (arr[i][j] != 0)
            {
                non_zero++;
            }
        }
    }
    isSparse();
    tri_diognal();
    return 0;
}