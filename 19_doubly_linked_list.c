#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
} * head, *temp, *last;
int c;
void append()
{
    if (head == NULL)
    {
        head = temp = (struct node *)malloc(sizeof(struct node));
        temp->prev = NULL;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        last->next = temp;
        temp->prev = last;
    }

    printf("Enter Value : ");
    scanf("%d", &temp->data);
    last = temp;
    temp->next = NULL;
    c++;
}

void insert()
{
    struct node *p;
    int pos, i = 1;

    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &p->data);
    printf("Enter Position : ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        p->prev = NULL;
        p->next = head;
        head->prev = p;
        head = p;
        c++;
    }
    else if ((pos > 1) && (pos <= c + 1))
    {
        temp = head;
        for (i = 1; i <= pos - 2; i++)
            temp = temp->next;

        p->prev = temp;
        p->next = temp->next;
        temp->next = p;
    }
    else
    {
        printf("Position Does Not Exist\n");
    }
}

void display()
{
    if (c > 0)
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } 
    }
    else
    {
        printf("Empty\n");
    }
}

void delete ()
{
    int pos, i;
    printf("Enter Position : \n");
    scanf("%d", &pos);

    if (c > 0)
    {
        if (pos == 1)
        {
            temp = head;
            head = head->next;
            head->prev = NULL;
            free(temp);
            c--;
        }
        else if ((pos > 1) && (pos <= c + 1))
        {
            temp = head;

            for (i = 1; i <= pos - 2; i++)
                temp = temp->next;

            last = temp->next;
            temp->next = temp->next->next;
            temp->next->prev = temp;
            free(last);
            c--;
        }
        else
            printf("Position Does Not Exist\n");
    }
    else
        printf("Empty\n");
}
void count()
{
    int ch = 0;
    if (head != NULL)
    {
        temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            ch++;
        } 
        printf("%d\n", ch);
    }
    else
    {
        printf("\n0\n");
    }
}
void search()
{
    int s;
    printf("Enter Any Value : ");
    scanf("%d", &s);
    if (head != NULL)
    {
        temp = head;
        while (temp != NULL)
        {
            if (temp->data == s)
            {
                printf("Number Is Found\n");
                break;
            }
            temp = temp->next;
        }

        if (temp == NULL)
        {
            printf("Not Found\n");
        }
    }
    else
    {
        printf("Linked List Does Not Exist\n");
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
        printf("Enter 7 to Exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            append();
        }
        else if (n == 2)
        {
            insert();
        }
        else if (n == 3)
        {
            display();
        }
        else if (n == 4)
        {
            delete ();
        }
        else if (n == 5)
        {
            count();
        }
        else if (n == 6)
        {
            search();
        }
        else if (n == 7)
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
