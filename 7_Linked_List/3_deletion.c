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
node* deleteFirst(node*head)
{
    node*p=(node*)malloc(sizeof(node));
    p=head;
    head=head->next;
    free(p);
    return head;
}
node* deleteAtIndex(node*head,int index)
{
    node*p=(node*)malloc(sizeof(node));
    node*q=(node*)malloc(sizeof(node));
    int i;
    p=head;
    q=head->next;
    i=0;
    while (i<index-1)
    {
        p=p->next;        
        q=q->next;        
        i++;
    }
    p->next=q->next;
    return head;
}
node* deleteLast(node*head)
{
    node*p=(node*)malloc(sizeof(node));
    node*q=(node*)malloc(sizeof(node));
    p=head;
    q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
int main()
{
    node *head, *sec, *thrd, *frth;
    head = (node *)malloc(sizeof(node));
    sec = (node *)malloc(sizeof(node));
    thrd = (node *)malloc(sizeof(node));
    frth = (node *)malloc(sizeof(node));
    head->data = 10;
    head->next = sec;
    sec->data = 20;
    sec->next = thrd;
    thrd->data = 30;
    thrd->next = frth;
    frth->data = 40;
    frth->next = NULL;
    printf("Before Deletion\n");
    printLL(head);
    printf("After Deletion\n");
    // head=deleteFirst(head);
    deleteLast(head);
    printLL(head);
    return 0;
}