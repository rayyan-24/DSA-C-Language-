#include <stdio.h>
#include <stdlib.h>
void display(void);
void insert(void);
void delete (void);
// int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int arr1[10];
int ctr=0;
int main()
{
    while(1)
    {

        int n;
        printf("Enter 1 for Traversing\nEnter 2 for Inserting\nEnter 3 for Deleting\nEnter 4 for Searching\nEnter 5 for exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            display();
        }
        else if (n == 2)
        {
            insert();
        }
        else if (n == 3)
        {
            // delete ();
        }
        else if (n == 4)
        {
            // search();
        }
        else if (n == 5)
        {
            // search();
            exit(0);
        }
    }
    return 0;
}
void display(void)
{
    int i;
    if(ctr==0)
    {
        printf("ERROR! Array is Empty\n");
    }
    for (i = 0; i < ctr; i++)
    {
        printf("%d\n", arr1[i]);
    }
}
void insert(void)
{
    int pos,val,i;
    if (ctr>=10)
    {
        printf("Array is full\n");
    }
    else
    {
        ctr++;
        printf("Enter position to insert\n");
        scanf("%d",&pos);
        printf("Enter val to insert\n");
        scanf("%d",&val);
        for (int i = pos; i <= ctr; i++)
        {
            arr1[i+1]=arr1[i];
        }
        arr1[pos-1]=val;
    }
}
void delete (void);

