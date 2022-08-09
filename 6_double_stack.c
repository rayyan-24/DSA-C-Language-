#include <stdio.h>
#include <stdlib.h>
int arr[50], top1 = -1, top2 = 24;
void push(int val);
void pop();
void display();
void push1(int val);
void pop1();
void display1();

int main()
{
    int n1, n2, num;
    while (1)
    {
        printf("Enter 1 for stack 1\n");
        printf("Enter 2 for stack 2\n");
        printf("Enter 3 for exit\n");
        scanf("%d", &n1);
        if (n1 == 1)
        {
            while (1)
            {

                // stack 1
                printf("Enter 1 for push\n");
                printf("Enter 2 for pop\n");
                printf("Enter 3 for display\n");
                printf("Enter 4 for stack menu\n");
                scanf("%d", &n2);
                if (n2 == 1)
                {
                    printf("Enter value you want to push\n");
                    scanf("%d", &num);
                    push(num);
                    printf("\n\n");
                }
                else if (n2 == 2)
                {
                    pop();
                }
                else if (n2 == 3)
                {
                    display();
                }
                else if (n2 == 4)
                {
                    break;
                }
                else
                {
                    printf("Invalid Input\n");
                }
            }
        }
        else if (n1 == 2)
        {
            while (1)
            {

                // stack 2
                printf("Enter 1 for push\n");
                printf("Enter 2 for pop\n");
                printf("Enter 3 for display\n");
                printf("Enter 4 for stack menu\n");
                scanf("%d", &n2);
                printf("\n");
                if (n2 == 1)
                {

                    printf("Enter value you want to push\n");
                    scanf("%d", &num);
                    push1(num);
                    printf("\n\n");
                }
                else if (n2 == 2)
                {

                    pop1();
                }
                else if (n2 == 3)
                {

                    display1();
                }
                else if (n2 == 4)
                {
                    break;
                }
                else
                {
                    printf("Invalid Input\n");
                }
            }
        }

        else if (n1 == 3)
        {
            exit(0);
        }
        else
        {
            printf("Invalid Input\n");
        }
    }

    return 0;
}
void push(int val)
{
    if (top1 > 24)
    {
        printf("stack overflow\n");
    }
    top1++;
    arr[top1] = val;
}
void pop()
{
    if (top1 == -1)
    {
        printf("stack under flow\n");
    }
    top1--;
}
void display()
{
    for (int i = 0; i <= top1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void push1(int val)
{
    if (top2 > 49)
    {
        printf("stack overflow\n");
    }
    top2++;
    arr[top2] = val;
}
void pop1()
{
    if (top2 == 24)
    {
        printf("stack under flow\n");
    }
    top2--;
}
void display1()
{
    for (int i = 25; i <= top2; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}