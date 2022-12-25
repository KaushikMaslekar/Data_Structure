#include<stdio.h>
#include<conio.h>

#define max 6

int st[max], top=-1;

void push()
{
    int data;
    if(top==max)
    {
        printf("Stack is full");
        exit(0);
    }
    else{
        printf("Enter the data");
        scanf("%d", &data);
        top++;
        st[top]=data;
    }
}

void pop()
{
    int temp;
    if(top==-1)
    {
        printf("Stack is Empty");
        exit(0);
    }
    else
    {
        temp=st[top];
        top--;
        printf("Deleted data is %d", temp);
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i++)
    {
        printf("%d", st[i]);
    }
}

int main()
{
    int ch, ans=1;
    do
    {
        printf("Stack Operation");
        printf("\n1.insertion");
        printf("\n2.Deletion");
        printf("\n3.display");
        printf("\n4.exit");
        printf("\nEnter the your choice");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push();
                    break;
            
            case 2:
                pop();
                    break;

            case 3:
                display();
                    break;
            
            case 4:
                exit(0);
                    break;
            
            default:
                printf("Wrong Choice");
                    break;
        }
        printf("Do you want to continue?[1/0]");
        scanf("%d", &ans);
    }while(ans==1);
    return 0;
}