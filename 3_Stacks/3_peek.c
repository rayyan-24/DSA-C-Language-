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
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
// peek for index starting from 1
int peek(stack *ptr, int index)
{
    int val = ptr->arr[ptr->top - index + 1];
    if (val <= 0)
    {
        printf("Not a valid index\n");
        return -1;
    }
    else
    {
        return val;
    }
}
// peek for index starting from 0

// int peek(stack * ptr,int index)
// {
//     int val=ptr->arr[ptr->top-index];
//     if (val<0)
//     {
//         printf("Not a valid index\n");
//         return -1;
//     }
//     else
//     {
//         return val;
//     }

// }
int main()
{
    int a;
    stack *s1 = (stack *)malloc(sizeof(stack));
    s1->size = 100;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));

    push(s1, 1);
    push(s1, 2);
    push(s1, 3);
    push(s1, 4);
    push(s1, 5);
    push(s1, 6);
    push(s1, 96);
    push(s1, 95);
    for (int i = 1; i <= s1->top+1; i++)
    {
        printf("%d ", peek(s1, i));
    }
}