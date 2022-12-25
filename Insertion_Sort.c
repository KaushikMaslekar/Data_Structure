#include<stdio.h>

void main()
{
    int arr[5] = { 1, 3, 4, 56, 54};
    int i, j, temp, k;
    printf("Insertion sort");
    printf("\nArray before sorting");
    for(i=0;i<=4;i++)
        printf("%d\n", arr[i]);
        for(i=1;i<=4;i++)
        {
            for(j=0;j<i;j++)
            {
                if(arr[i]> arr[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    for(k=1;k>j;k--)
                    arr[k] = ar[k-1];
                    a[k] = temp;
                }
            }
        }
        printf("\nArray after sorting");
        for(i=0;i<=4;i++)
            printf("%d", arr[i]);
}