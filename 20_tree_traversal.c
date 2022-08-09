#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
} *root;
void create(struct node **s, int d)
{
    if (*s == NULL)
    {
        (*s) = (struct node *)malloc(sizeof(struct node));
        (*s)->data = d;
        (*s)->left = NULL;
        (*s)->right = NULL;
    }
    else
    {
        if ((*s)->data > d)
            create(&(*s)->left, d);
        else
            create(&(*s)->right, d);
    }
}

void inorder(struct node **s)
{
    if (*s != NULL)
    {
        inorder(&(*s)->left);
        printf(" %d ", (*s)->data);
        inorder(&(*s)->right);
    }
}

void preorder(struct node **s)
{
    if (*s != NULL)
    {
        printf(" %d ", (*s)->data);
        inorder(&(*s)->left);
        inorder(&(*s)->right);
    }
}
void postorder(struct node **s)
{
    if (*s != NULL)
    {
        inorder(&(*s)->left);
        inorder(&(*s)->right);
        printf(" %d ", (*s)->data);
    }
}
void main()
{
    int n, d;
    root = NULL;
    printf("For 1st node press 1\n");
    while (1)
    {
        printf("\nEnter 1 to Insert\n");
        printf("Enter 2 to Inorder Traversal\n");
        printf("Enter 3 to Preorder Traversal\n");
        printf("Enter 4 to Postorder Traversal\n");
        printf("Enter 5 to Exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            printf("Enter your data");
            scanf("%d", &d);
            create(&root, d);
        }

        else if (n == 2)
        {
            inorder(&root);
        }
        else if (n == 3)
        {
            preorder(&root);
        }
        else if (n == 4)
        {
            postorder(&root);
        }

        else if (n == 5)
        {
            break;
        }
        else
        {
            printf("Invalid Input\n");
        }
    }
}
