#include <stdio.h>
int arr[10] = {0}, l = -1, c = 0;
void insert()
{
    int pos, value, i, j;
    if (c == 10)
    {
        printf("Array is full\n");
    }
    else
    {
        printf("Enter the position : ");
        scanf("%d", &pos);
        pos--;
        if (pos < 0 || pos > l + 1)
        {
            printf("Position is not correct\n");
        }
        else
        {
            printf("Enter the number : ");
            scanf("%d", &value);
            if (pos == l + 1)
            {
                arr[l + 1] = value;
                c++;
                l++;
            }
            else
            {
                for (i = l + 1, j = l; j >= pos; j--, i--)
                {
                    arr[i] = arr[j];
                }
                arr[i] = value;
                l++;
                c++;
            }
        }
    }
}
void display()
{
    int i;
    if (l < 0)
    {
        printf("Array in empty\n");
    }
    else
    {
        for (i = 0; i <= l; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
void delete()
{
    int pos, i, j;
    if (c == 0)
    {
        printf("Array is empty");
    }
    else
    {
        printf("Enter the position: ");
        scanf("%d", &pos);
        pos--;
        if (pos >= 0 && pos <= l)
        {
            if (pos == l)
            {
                l--, c--;
            }
            else
            {
                for (i = pos, j = pos + 1; j <= l; i++, j++)
                {
                    arr[i] = arr[j];
                }
                l--;
                c--;
            }
        }
        else
        {
            printf("Invalid postion");
        }
    }
}
void search()
{
    int value, i, flag = 0;
    if (c == 0)
    {
        printf("Array is empty");
    }
    else
    {
        printf("Enter value : ");
        scanf("%d", &value);
        for (i = 0; i <= l; i++)
        {
            if (arr[i] == value)
            {
                printf("%d is on %d position.\n", value, ++i);
                flag = 1;
                break;
            }
        }
        if (flag==0)
        {
            printf("Number is not present in the array");
        }
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("Enter 1 to Insert\n");
        printf("Enter 2 to Display\n");
        printf("Enter 3 to Delete\n");
        printf("Enter 4 to Search\n");
        printf("Enter 5 to Exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            insert();
        }
        else if (n == 2)
        {
            display();
        }
        else if (n == 3)
        {
            delete();
        }
        else if (n == 4)
        {
            search();
        }
        else if (n == 5)
        {
            break;
        }
        else
        {
            printf("Wrong Choice\n");
        }

    }
    return 0;
}
