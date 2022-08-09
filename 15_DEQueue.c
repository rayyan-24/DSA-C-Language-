#include <stdio.h>
#include <stdlib.h>

int arr1[10] = {}, front = 0, rear = -1, c = 0;
void insertFront()
{
    if (c < 10)
    {
        front = (front + 9) % 10;
        printf("Enter the value\n");
        scanf("%d", &arr1[front]);
        c++;
    }
    else
        printf("Full\n");
}
void insertRear()
{
    if (c < 10)
    {
        rear = (rear + 1) % 10;
        printf("Enter the value\n");
        scanf("%d", &arr1[rear]);
        c++;
    }
    else
        printf("Full\n");
}
void delFront()
{
    if (c > 0)
    {
        front = (front + 1) % 10;
        c--;
    }
    else
        printf("Empty\n");
}
void delRear()
{
    if (c > 0)
    {
        rear = (rear + 9) % 10;
        c--;
    }
    else
        printf("Empty\n");
}
void display()
{
    int i, j;

    if (c > 0)
    {
        j = front;
        for (i = 1; i <= c; i++, j = (j + 1) % 10)
            printf("%d ", arr1[j]);
    }
    else
        printf("Empty\n");
}
void main()
{
    int n, n1, n2;
    while (1)
    {
        printf("Enter 1 for Input Restricted\n");
        printf("Enter 2 for Output Restricted\n");
        printf("Exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            printf("Input Restricted\n");
            while (1)
            {
                printf("\nEnter 1 for Insert\n");
                printf("Enter 2 for Delete Front\n");
                printf("Enter 3 for Delete Rear\n");
                printf("Enter 4 for Display\n");
                printf("Enter 5 for Exit\n");
                scanf("%d", &n1);
                if (n1 == 1)
                {
                    insertRear();
                }
                else if (n1 == 2)
                {
                    delFront();
                }
                else if (n1 == 3)
                {
                    delRear();
                }
                else if (n1 == 4)
                {
                    display();
                }
                else if (n1 == 5)
                {
                    break;                   
                }
            }
        }
        else if (n == 2)
        {
            printf("Output Restricted\n");
            while (1)
            {
                printf("\nEnter 1 for Insert Front\n");
                printf("Enter 2 for Insert Rear\n");
                printf("Enter 3 for Delete Front\n");
                printf("Enter 4 for Display\n");
                printf("Enter 5 for Exit\n");
                scanf("%d", &n2);
                if (n2 == 1)
                {
                    insertFront();
                }
                else if (n2 == 2)
                {
                    insertRear();
                }
                else if (n2 == 3)
                {
                    delFront();    
                }
                else if (n2 == 4)
                {
                    display();
                }
                else if (n2 == 5)
                {
                    break;                  
                }
            }
        }
        else if (n == 3)
        {
            exit(0);
        }
    }
}
