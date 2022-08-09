#include<stdio.h>
int main()
{
    int i,n1,n,arr1[30],k,j=0;
    printf("Enter The number of Elements: ");
    scanf("%d",&n1);
    for ( i = 0; i < n1; i++)
    {
        printf("Enter Element %d :",i+1);
        scanf("%d",arr1[i]);
        n=arr1[i];
        k=j-1;
        while (k>=0 && n<arr1[k])
        {
            arr1[k+1]=arr1[k];
            k--;
        }
        arr1[k+1]=n;
        j++;
    }
    printf("Sorted Elements are ");
    for (int i = 0; i < n1; i++)
    {
        printf("%d",arr1[i]);
    }
    
    return 0;
}