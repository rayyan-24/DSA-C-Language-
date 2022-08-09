#include <stdio.h>
void display(void);
void push(void);
void pop(void);
int stack[10], top = -1;
int main()
{
    int n;
    while (1)
    {
        printf("Enter 1 to display\nEnter 2 to push\nEnter 3 to pop\nEnter 4 to exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            display();
        }
        if (n == 2)
        {
            push();
        }
        if (n == 3)
        {
            pop();
        }
        if (n == 4)
        {
            break;
        }
    }
    return 0;
}
void display(void)
{
    int i;
    if (top > -1)
    {
        for (i = 0; i <= top; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("Underflow\n");
    }
}
void push(void)
{
    int val;
    if (top < 9)
    {
        top++;
        printf("Enter Element\n");
        scanf("%d", &val);
        stack[top] = val;
    }
}
void pop(void)
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        top--;
    }
}