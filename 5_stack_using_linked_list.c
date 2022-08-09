#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *head;
void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("Enter 1 to Push\n");
        printf("Enter 2 to Pop\n");
        printf("Enter 3 to Display\n");
        printf("Enter 4 to Exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            push();
        }
        else if (n == 2)
        {
            pop();
        }
        else if (n == 3)
        {
            display();
        }
        else if (n == 4)
        {
            break;
        }
        else
        {
            printf("Please Enter valid choice\n ");
        }
    }
    return 0;
}
