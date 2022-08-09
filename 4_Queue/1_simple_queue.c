#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int rear;
    int front;
    int *arr;
} typedef queue;
int isfull(queue *ptr)
{
    if (ptr->rear == ptr->size-1 )
    {
        return 1;
    }
    return 0;
}
int isempty(queue *ptr)
{
    if (ptr->front == ptr->rear)
    {
        return 1;
    }
    return 0;
}
void enqueue(queue *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Queue is full\n");
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = val;
    }
}
int dequeue(queue *ptr)
{
    int a;
    if (isempty(ptr))
    {
        printf("Queue is Empty\n");
        return -1;
    }
    a = ptr->front;
    ptr->front++;
    return a;
}
int display(queue *ptr)
{
    if (isempty(ptr))
    {
        printf("Empty Queue\n");
        return -1;
    }
    for (int i = ptr->front+1; i <= ptr->rear; i++)
    {
        printf("%d ", ptr->arr[i]);
    }
}
int main()
{
    queue queue1;
    queue1.size = 10;
    queue1.front = queue1.rear = -1;
    queue1.arr = (int *)malloc(queue1.size * sizeof(int));
    printf("%d\n",isempty(&queue1)); // 1
    printf("%d\n",isfull(&queue1)); // 0 
    enqueue(&queue1, 11);
    enqueue(&queue1, 12);
    enqueue(&queue1, 13);
    enqueue(&queue1, 14);
    enqueue(&queue1, 15);
    enqueue(&queue1, 16);
    enqueue(&queue1, 17);
    enqueue(&queue1, 18);
    enqueue(&queue1, 19);
    enqueue(&queue1, 20);
    printf("%d\n",isempty(&queue1)); // 0
    printf("%d\n",isfull(&queue1)); // 1
    printf("Displaying\n");
    display(&queue1);
}