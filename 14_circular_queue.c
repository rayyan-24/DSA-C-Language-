#include <stdio.h>
void insert(void);
void delete (void);
void display(void);
int arr[10], front = 0, rear = -1, count = 0;
int main()
{
    int n;
    while (1)
    {
        printf("Enter 1 for Insert \n");
        printf("Enter 2 for Delete \n");
        printf("Enter 3 for Display \n");
        printf("Enter 4 for Exit \n");
        scanf("%d", &n);
        if (n == 1)
        {
            printf("INsert\n");
            insert();
        }
        else if (n == 2)
        {
            printf("Delete\n");
            delete ();
        }
        else if (n == 3)
        {
            printf("Display\n");
            display();
        }
        else if (n == 4)
        {
            break;
        }
        else
        {
            printf("Enter a Valid Inpur\n");
        }
    }
    return 0;
}

void insert()
{

    if (count < 10)
    {
        rear = (rear + 1) % 10;
        printf("Enter Element to Insert ");
        scanf("%d", &arr[rear]);
        count++;
    }
    else
    {

        printf("\nQueue is full\n");
    }
}

void delete ()
{

    if (count > 0)
    {
        front = (front + 1) % 10;
        count--;
    }
    else
    {
        printf("Queue is empty");
    }
}

void display()
{
    int i, j;
    j = front;

    if (count > 0)
    {
        for (i = 1; i <= count; i++,j = (j + 1) % 10)
        {
            printf("%d ", arr[j]);
        }
    }
    else
    {
        printf("Empty Queue");
    }
}