#include <stdio.h>
#include <stdlib.h>
struct c_queue
{
    int size;
    int rear;
    int front;
    int count;
    int *arr;
} typedef c_queue;
int isfull(c_queue *ptr)
{
    if ((ptr->rear + 1) % ptr->size == ptr->front)
    {
        return 1;
    }
    return 0;
}
int isempty(c_queue *ptr)
{
    if (ptr->front == ptr->rear)
    {
        return 1;
    }
    return 0;
}
void enqueue(c_queue *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Queue is full\n");
    }
    else
    {
        ptr->rear = (ptr->rear + 1) % ptr->size;
        ptr->count++;
        ptr->arr[ptr->rear] = val;
    }
}
int dequeue(c_queue *ptr)
{
    int a;
    if (isempty(ptr))
    {
        printf("Queue is Empty\n");
        return -1;
    }
    a = ptr->front;
    ptr->front = (ptr->front + 1) % ptr->size;
    ptr->count--;

    return a;
}
int display(c_queue *ptr)
{
    int j = ptr->front + 1;
    if (isempty(ptr))
    {
        printf("Empty Queue\n");
        return -1;
    }
    for (int i = 0; i < ptr->count; i++, j = (j + 1) % ptr->size)
    {
        printf("%d\n", ptr->arr[j]);
    }
}
int main()
{
    c_queue queue1;
    queue1.size = 4 + 1;
    queue1.front = queue1.rear = 0;
    queue1.count = 0;
    queue1.arr = (int *)malloc(queue1.size * sizeof(int));
    enqueue(&queue1, 10);
    enqueue(&queue1, 11);
    enqueue(&queue1, 12);
    enqueue(&queue1, 13);
    dequeue(&queue1);
    dequeue(&queue1);
    dequeue(&queue1);
    dequeue(&queue1);
    enqueue(&queue1, 14);
    enqueue(&queue1, 14);
    enqueue(&queue1, 14);
    enqueue(&queue1, 14);
    printf("Displaying\n");
    printf("%d\n",queue1.count);
    // display(&queue1);
}