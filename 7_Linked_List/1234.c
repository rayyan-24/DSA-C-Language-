#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data, count;
    struct node *next;

} node;
void printLL(node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
node *insert_begin(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        ptr->data = data;
        head = ptr;
        ptr->next = NULL;
        return ptr;
    }
    else
    {
        ptr->next = head;
        ptr->data = data;
        return ptr;
    }
}
node *insert_end(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
node *insert_between(node *head, int data, int index)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    for (int i = 0; i != index - 1; i++)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
node *insert_after(node *head, node *prev, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = prev->next;
    prev->next = ptr;
    return head;
}
int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));
    int val;
    head = NULL;
    while (1)
    {
        printf("Enter Val:");
        scanf("%d", &val);
        head = insert_begin(head, val);
        head = insert_between(head, 10, 1);
        printLL(head);
    }
    return 0;
}