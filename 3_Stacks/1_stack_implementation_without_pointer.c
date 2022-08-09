#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
}typedef stack;
int isEmpty(stack S)
{
    if (S.top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(stack S)
{
    if (S.top==S.size-1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    stack s1;
    int a;
    // stack *s2;
    // s2->size = 100;
    // s2->top = -1;
    // s2->arr[0]=1;
    // s2->top++;
    // s2->arr = (int *)malloc(s2->size * sizeof(int));
    s1.size = 100;
    s1.top = -1;
    s1.arr = (int *)malloc(s1.size * sizeof(int));

    a=isEmpty(s1);
    printf("%d\n",a);

    a=isFull(s1);
    printf("%d\n",a);
    return 0;
}