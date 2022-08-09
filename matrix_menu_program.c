#include <stdio.h>
void diagonal(void);
void tri_diagonal(void);
void l_triangular(void);
void u_triangular(void);
void sparse(void);
int main()
{
    while (1)
    {
        int n;
        printf("Enter 1 for Diagonal Matrix\nEnter 2 for Tridiagonal Matrix\nEnter 3 for Lower Triangular Matrix\nEnter 4 for Upper Triangular Matrix \nEnter 5 for Sparse Matrix\nEnter 6 for Exit Matrix\n");
        scanf("%d", &n);
        if (n == 1)
        {
            diagonal();
        }
        else if (n == 2)
        {
            // tri_diagonal();
        }
        else if (n == 3)
        {
            // l_triangular();
        }
        else if (n == 4)
        {
            // u_triangular();
        }
        else if (n == 5)
        {
            // sparse();
        }
        else if (n == 6)
        {
            break;
        }
    }

    return 0;
}
void diagonal(void)
{
    int row_size, col_size;
    int i, j;
    int flag = 0;
    printf("Enter the row Size Of the Matrix:");
    scanf("%d", &row_size);
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d", &col_size);

    int matrix[row_size][col_size];

    printf("Enter the Matrix Element:\n");
    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            if (i != j && matrix[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        printf("Given Matrix is not a diagonal Matrix.\n");
    else
        printf("Given Matrix is a diagonal Matrix.\n");
}
void tri_diagonal(void);
void l_triangular(void);
void u_triangular(void);
void sparse(void);