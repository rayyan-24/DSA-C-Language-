#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void printLL(node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    node *head, *sec, *thrd, *frth;
    head = (node *)malloc(sizeof(node));
    sec = (node *)malloc(sizeof(node));
    thrd = (node *)malloc(sizeof(node));
    frth = (node *)malloc(sizeof(node));
    // inserting data in head node and connecting head node with second node
    head->data = 10;
    head->next = sec;
    // inserting data in second node and connecting second node with third node
    sec->data = 20;
    sec->next = thrd;
    // inserting data in third node and connecting third node with fourth node
    thrd->data = 30;
    thrd->next = frth;
    // inserting data in third node and terminating the linked list
    frth->data = 40;
    frth->next = NULL;

    printLL(head);
    return 0;
}