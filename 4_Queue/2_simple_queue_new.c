#include <stdio.h>
#define SIZE 10
int arr1[SIZE];
int front = -1, rear = -1;
void insert(int val)
{
    if (rear == SIZE - 1)
    {
        printf("Overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr1[rear] = val;
    }
    else
    {
        rear++;
        arr1[rear] = val;
    }
}
void delete ()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else if (rear == front)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}
void display()
{
    int i;
    if (rear==-1)
    {
        printf("Underflow\n");
    }
    
    for (i = front; i < rear + 1; i++)
    {
        printf("%d ", arr1[i]);
    }
}
void isFull()
{
    if (rear == SIZE - 1)
    {
        printf("Overflow\n");
    }
}
void isEmpty()
{
    if (front == rear)
    {
        printf("Underflow\n");
    }
}
int main()
{
    // isEmpty();
    insert(10);
    insert(10);
    delete();
    delete();
    display();

    return 0;
}