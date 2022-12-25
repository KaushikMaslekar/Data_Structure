#include<stdio.h>
#include<conio.h>
#define MAX 5

int front = 0, rear = 0, Q[MAX], ch;
void main()
{
    do
    {
        printf("\n--------Queue Operation---------");
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Display");
        printf("\nEnter your choice");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                deleteQ();
                break;
            case 3:
                display();
                break;
            default:
                printf("\nInvalid choice");
        }
        getch();
    }while(ch!=4);
}
void insert()
{
    int num;
    if(rear >= MAX)
    {
        printf("----Queue is full----");
    }
    else
    {
        printf("Enter the element to insert");
        scanf("%d", &num);
        Q(rear) = num;
        rear = rear + 1;
    }
}
void deleteQ()
{
    if(front<0)
    {
        printf("\n----Queue is Empty----");
    }
    else{
        int x = Q(front);
            printf("The deleted element is %d", x);
            if(front == rear)
            {
                front = 0;
                rear = 0;
            }
            else 
            {
                front = front + 1;
            }
    }
}
void display()
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("%d", Q[i]);
    }
}