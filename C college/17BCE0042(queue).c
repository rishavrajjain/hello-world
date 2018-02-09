#include<stdio.h>
#include<stdlib.h>

void enqueue();
void display();
void dequeue();
void isEmpty();
void isFull();



int a[10],i=0,e,n,t,front=-1,rear=-1;

main()
{
    printf("             17BCE0042\n");

    char option='T';

    while(option=='T')
    {
        printf("\n");
        printf("Enter command (17BCE0042)\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. isEmpty\n");
        printf("5. isFull\n");
        printf("6. Peek\n");
        printf("7. Exit\n\n");

        scanf("%d",&n);
        switch(n)
        {

        case 1:
            enqueue();
            display();
            break;
        case 2:
            dequeue();
            display();
            break;
        case 3:
            display();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            display();
            break;
        case 6:
            printf("\nPeek is %d\n",a[rear]);
            break;

        case 7:
            printf("        Thankyou!!\n");
            exit(0);
        }
    }

}

void dequeue()
{
    if (rear==-1)
    {
        printf("Sorry\nQueue is Empty\n");
        return;
    }

    for(i=front;i<rear;i++)
    {
        a[i]=a[i+1];
    }
    printf("Done\n");

    rear--;

}

void enqueue()
{
    if (rear==4)
    {
        printf("Sorry\nQueue is already full\n");
        return;
    }
    if(front==-1)
    {
        front++;
    }
    printf("Enter number\n");
    scanf("%d",&e);
    a[rear+1]=e;

    rear++;

}


void display()
{
    printf("\n");
    for (i=0;i<=rear;i++)
    {
        printf("%d\n",a[i]);
    }

}


void isEmpty()
{
    if (rear==-1)
    {

        printf("Yes, it is empty");
    }
    else
    {

        printf("No it is not empty");
    }
}

void isFull()
{
    if (rear==4)
    {

        printf("Queue is FULL!!");
    }
    else{
        printf("No it is not full");
    }
}

