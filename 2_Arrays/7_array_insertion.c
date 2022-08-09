#include<stdio.h>
void display(int arr[],int u_size);
int insert(int arr[],int t_size,int u_size,int index,int element);

int main()
{
    int arr[20]={1,7,3,5,7,3},t_size=100,u_size=6,index=4,element=0;
    display(arr,u_size);
    insert(arr,t_size,u_size,index,element);
    u_size++;
    // insert(arr,100,6,4,0);
    display(arr,u_size);
    return 0;
}
void display(int arr[],int u_size)
{
    for (int i = 0; i < u_size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insert(int arr[],int t_size,int u_size,int index,int element)
{
    if (u_size>=t_size)
    {
        printf("Array is full\n");
        return -1;
    }
    for (int i = u_size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}