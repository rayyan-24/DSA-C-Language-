#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
} typedef stack;
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack Over Flow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Under Flow\n");
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int stackTop(stack * ptr)
{
    return ptr->arr[ptr->top];
}
int stackBottom(stack * ptr)
{
    return ptr->arr[0];
}
int main()
{
    int a;
    stack *s1 = (stack *)malloc(sizeof(stack));
    s1->size = 10;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));

    push(s1, 1);
    push(s1, 2);
    push(s1, 3);
    push(s1, 4);
    push(s1, 5);
    push(s1, 6);
    push(s1, 7);
    printf("%d %d",stackTop(s1),stackBottom(s1));
    

}