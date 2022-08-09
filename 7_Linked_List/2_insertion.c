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
node* insert_begin(node*head,int data)
{
    node*ptr=(node*)malloc(sizeof(node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
node* insert_end(node*head,int data)
{
    node*ptr=(node*)malloc(sizeof(node));
    ptr->data=data;
    node*p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
node* insert_between(node*head,int data,int index)
{
    node*ptr=(node*)malloc(sizeof(node));
    node*p=head;
    for (int i = 0; i != index-1; i++)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
node*insert_after(node*head,node*prev,int data)
{
    node*ptr=(node*)malloc(sizeof(node));
    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;
    return head;
}
int main()
{
    node *head, *sec, *thrd, *frth;
    head = (node *)malloc(sizeof(node));
    sec  = (node *)malloc(sizeof(node));
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

    // printLL(head);
    printf("Before Insertion\n");
    printLL(head);
    printf("After Insertion\n");
    head=insert_between(head,1990,4);
    printLL(head);
    // head=insert_begin(head,22);
    // head=insert_between(head,163,2);
    // head=insert_end(head,22);
    // insert_after(head,sec,100);
    return 0;
}