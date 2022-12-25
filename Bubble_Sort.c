#include<stdio.h>
#include<conio.h>

#define max 10

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bSort(int list[], int n)
{
    int i, j;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j,(n-(i+1));j++)
        {
            if(a[i]> list[j+1])
            {
                swap(&list[j], &list[j+1]);
            }
        }
    }
}
void read()
{
    int i;
    printf("Enter the element ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &list[i]);
    }
}

void printList(int list[], int n)
{
    int i;
    printf("The element of the list are:");
        for(i=0;i<n;i++)
    printf("%d", list[i]);
}

void main()
{
    int list[max], n;
    printf("Enter the number of element in the list");
    scanf("%d", &n);
    readList(list, n);
    printf("The list before sorting");
    printList("list, n");
    bSort(list, n);
    printf("the list after sorting is");
    printList(list, n);
}