#include<stdio.h>
#include<malloc.h>
void main()
{
    int n,i;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int *p = (n*sizeof(int)); //=p[n]
    for(i=0;i<n;i++)
    {
        printf("enter element: ");
        scanf("%d",p+i);
    }
    printf("array contents:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",p+i);
    }
    printf("\n");
}