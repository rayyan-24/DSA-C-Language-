#include <stdio.h>
#include <stdlib.h>
int arr[20], front = 0, rear = -1;
void insert(void);
void delete (void);
void display(void);
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
            printf("Insert\n");
            insert();
        }
        else if (n == 2)
        {
            printf("Delete\n");
            delete();
        }
        else if (n == 3)
        {
            printf("Display\n");
            display();
        }
        else if (n == 4)
        {
            exit(0);
        }
        else
        {
            printf("Enter a valid input\n");
        }
    }
        return 0;
}
void insert(void)
{
    if (rear < 20)
    {
        rear++;
        printf("Enter Element to Insert \n");
        scanf("%d", &arr[rear]);
    }
    else
    {
        printf("Queue is Full\n");
    }
}
void delete (void)
{
    if (front<=rear)
    {
        front++;
    }
    else
    {
        printf("Queue is Empty\n");
    }
}
void display(void)
{
    int i;
    if(rear>=front)
    {
        for ( i = front; i <=rear; i++)
        {
            printf("%d \n",arr[i]);
        }
    }
    else
    {
        printf("Queue is Empty\n");
    }
}