#include<stdio.h>
#include<stdlib.h>

void creation(void);
void push(void);
void display(void);
void pop(void);
void isEmpty(void);
void isFull(void);



int a[10],i=0,e,n,t,top=-1;

main()
{
    printf("             17BCE0042\n");

    char option='T';

    while(option=='T')
    {
        printf("\n");
        printf("Enter command (17BCE0042)\n");
        printf("1. Creation\n");
        printf("2. Push\n");
        printf("3. Pop\n");
        printf("4. Display\n");
        printf("5. isEmpty\n");
        printf("6. isFull\n");
        printf("7. Peek\n");
        printf("8. Exit\n\n");

        scanf("%d",&n);
        switch(n)
        {

        case 1:
            creation();
            break;
        case 2:
            push();
            display();
            break;
        case 3:
            pop();
            display();
            break;
        case 4:
            display();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            isFull();
            break;
        case 7:
            printf("\nPeek is %d\n",top+1);
            break;

        case 8:
            printf("        Thankyou!!\n");
            exit(0);
        }
    }

}
void creation()
{
    printf("Enter your element\n");
    for (i=0;i<5;i++)
    {
        top++;
        scanf("%d",&e);
        a[i]=e;
    }

}
void pop()
{
    if (top==-1)
    {
        printf("Sorry\nStack is Empty\n");
        return;
    }
    printf("Done\n");

    top--;

}

void push()
{
    if (top==4)
    {
        printf("Sorry\nStack is already full\n");
        return;
    }
    printf("Enter number\n");
    scanf("%d",&e);
    a[top+1]=e;

    top++;

}

void display()
{
    printf("\nStatus\n");
    for (i=0;i<=top;i++)
    {
        printf("%d\n",a[i]);
    }

}

void isEmpty()
{
    if (top==-1)
    {

        printf("Yes, it is empty");
    }
    else{
            printf("No, it is not empty");

    }
}

void isFull()
{
    if (top==4)
    {

        printf("Stack is FULL!!");
    }
    else{
        printf("No, it is not Full");
    }
}

