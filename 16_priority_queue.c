#include <stdio.h>
#define N 20
int arr1[N], arr2[N];
int rear = -1, front = -1;
void insert(int data, int p) 
{
    int i;
    if ((front == 0) && (rear == N - 1)) 
        printf("Queue is full");
    else
    {
        if (front == -1) 
        {
            front = rear = 0;
            arr1[rear] = data;
            arr2[rear] = p;
        }
        else if (rear == N - 1) 
        {
            for (i = front; i <= rear; i++)
            {
                arr1[i - front] = arr1[i];
                arr2[i - front] = arr2[i];
                rear = rear - front;
                front = 0;
                for (i = rear; i > front; i--)
                {
                    if (p > arr2[i])
                    {
                        arr1[i + 1] = arr1[i];
                        arr2[i + 1] = arr2[i];
                    }
                    else
                        break;
                    arr1[i + 1] = data;
                    arr2[i + 1] = p;
                    rear++;
                }
            }
        }
        else
        {
            for (i = rear; i >= front; i--)
            {
                if (p > arr2[i])
                {
                    arr1[i + 1] = arr1[i];
                    arr2[i + 1] = arr2[i];
                }
                else
                    break;
            }
            arr1[i + 1] = data;
            arr2[i + 1] = p;
            rear++;
        }
    }
}
void display() 
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("Element = %d Priority = %d\n", arr1[i], arr2[i]);
    }
}
void delete() 
{
    if (front == -1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("deleted Element = %d Its Priority = %d", arr1[front], arr2[front]);
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
}
int main()
{
    int n, num, i, data, p;
    while (1)
    {
        printf("Enter 1 to Insert \n");
        printf("Enter 2 to Display \n");
        printf("Enter 3 to Delete \n");
        printf("Enter 4 to Exit \n");
        scanf("%d", &n);
        if (n == 1)
        {
            printf("Enter the number of data\n");
            scanf("%d", &num);
            printf("Enter your data and Priority of data\n");
            for (int i = 0; i < num; i++)
            {
                scanf("%d %d", &data, &p);
                insert(data, p);
            }
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
            break;
        }
        else
        {
            printf("Invalid Input\n");
        }
    }
    return 0;
}