#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *last, *temp;
int c = 0;
void display()
{
    if (c > 0)
    {
        temp = head;
        do
        {
            printf("data\n=%d", temp->data);
            temp = temp->next;
        } while (temp != NULL);
    }
    else
    {
        printf("linked list does not exist\n");
    }
}
void merge()
{
    int ch;
    struct node *h1, *l1, *t1;
    h1 = t1 = (struct node *)malloc(sizeof(struct node));
    do
    {
        printf("Enter any data");
        scanf("%d", &t1->data);
        l1 = t1;
        t1->next = (struct node *)malloc(sizeof(struct node));
        t1 = l1->next;
        printf("Do you want to add more data?\n : ");
        scanf("%d", &ch);
    } while (ch != 0);
    l1->next = NULL;
    last->next = h1;
    temp = head;
    do
    {
        printf(" Data = %d\n", temp->data);
        temp = temp->next;
    } while (temp != NULL);
}

void sort()
{
    int p;
    struct node *t1, *t2;
    t2 = NULL;
    if (head != NULL)
    {
        for (t1 = head; t1->next != NULL; t1 = t1->next)
        {
            for (temp = head; temp->next != t2; temp = temp->next)
            {
                if ((temp->data) > (temp->next->data))
                {
                    p = temp->data;
                    temp->data = temp->next->data;
                    temp->next->data = p;
                }
            }
            t2 = temp;
        }
        display();
    }
    else
    {
        printf("linked list does not exist\n");
    }
}

void search()
{
    int s;
    printf(" Enter any value: ");
    scanf("%d", &s);
    if (head != NULL)
    {
        temp = head;
        do
        {
            if (temp->data == s)
            {
                printf("\n Number is found.\n");
                break;
            }
            temp = temp->next;
        } while (temp != NULL);
        if (temp == NULL)
        {
            printf("Number is not found\n");
        }
    }
    else
    {
        printf("linked list does not exist\n");
    }
}

void count()
{
    int ch = 0;
    if (head != NULL)
    {
        temp = head;
        do
        {
            ch++;
            temp = temp->next;
        } while (temp != NULL);
    }
    printf(" Total number of nodes are: %d\n", ch);
}

void append()
{
    if (head == NULL)
    {
        head = temp = (struct node *)malloc(sizeof(struct node));
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        last->next = temp;
    }
    printf(" Enter any value: ");
    scanf("%d", &temp->data);
    last = temp;
    temp->next = NULL;
    c++;
}

void insert()
{
    struct node *p;
    int pos, i;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter data: ");
    scanf("%d", &p->data);
    printf(" Enter the position: ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        p->next = head;
        head = p;
        c++;
    }
    else if ((pos > 1) && (pos <= c + 1))
    {
        temp = head;
        for (i = 1; i <= pos - 2; i++)
            temp = temp->next;
        p->next = temp->next;
        temp->next = p;
        c++;
    }
    else
    {
        printf(" Out of range\n");
    }
}

void delete ()
{
    int pos, i;
    if (c > 0)
    {
        printf("Enter the position: ");
        scanf("%d", &pos);
        if (pos == 1)
        {
            temp = head;
            head = head->next;
            free(temp);
            c--;
        }
        else if ((pos > 1) && (pos <= c))
        {
            temp = head;
            for (i = 1; i <= pos - 2; i++)
                temp = temp->next;
            last = temp->next;
            temp->next = temp->next->next;
            free(last);
            c--;
        }
        else
        {
            printf("Out of range\n");
        }
    }
    else
    {
        printf("linked list does not exist\n");
    }
}

int main()
{
    int n;
    head = NULL;
    while (1)
    {
        printf("Enter 1 to Append\n");
        printf("Enter 2 to Insert\n");
        printf("Enter 3 to Display\n");
        printf("Enter 4 to Delete\n");
        printf("Enter 5 to Count\n");
        printf("Enter 6 to Search\n");
        printf("Enter 7 to Sort\n");
        printf("Enter 8 to Merge\n");
        printf("Enter 9 to Exit\n");
        scanf("%d", &n);
        if(n==1)
        {
            append();
        }
        else if(n==2)
        {
            insert();
        }
        else if(n==3)
        {
            display();
        }
        else if(n==4)
        {
            delete ();
        }
        else if(n==5)
        {
            count();
        }
        else if(n==6)
        {
            search();
        }
        else if(n==7)
        {
            sort();
        }
        else if(n==8)
        {
            merge();
        }
        else if(n==9)
        {
            break;
        }
        else
        {
            printf("Invalid Input\n");
        }
        
    }
    return 0;
}
