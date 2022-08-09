#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head, *last, *temp;
int c = 0;
void search()
{
    int s, c = 0;
    printf("Enter any value: ");
    scanf("%d", &s);
    if (head != NULL)
    {
        temp = head;
        while (temp != head)
        {
            if (temp->data == s)
            {
                printf("Number is found\n");
                break;
            }
            temp = temp->next;
            c++;
        } 
        if (temp == head)
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
        } while (temp != head);
    }
    printf("Total number of nodes are: %d\n", ch);
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
    printf("Enter any value: ");
    scanf("%d", &temp->data);
    last = temp;
    temp->next = head;
    c++;
}

void insert()
{
    struct node *p;
    int pos, i;
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &p->data);
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        p->next = head;
        head = p;
        c++;
        last->next = head;
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
        printf("Out of range!\n");
    }
}

void display()
{
    if (c > 0)
    {
        temp = head;
        while (temp != head)
        {
            printf("data=%d\n", temp->data);
            temp = temp->next;
        }
    }
    else
    {
        printf("linked list does not exist\n");
    }
}

void delete()
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
            printf(" Out of range\n");
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
            delete();
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
