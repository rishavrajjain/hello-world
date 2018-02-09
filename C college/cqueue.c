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
        printf("7. Exit\n");

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
        case 8:
            printf("\n%d",front);
        }
    }

}

void dequeue()
{
    if (rear==-1 || front==-1 /*|| front>rear*/)
    {
        printf("Sorry\nCircular queue is Empty\n");
        return;
    }

    printf("Done\n");
    if(front==4)
    {
        front=-1;
    }
    else if(front==rear)
    {
        front==-1;
        rear==-1;
    }
    else{
    front++;
    }

}

void enqueue()
{
    if (rear+1==front)
    {
        printf("Sorry\nCQueue is already full\n");
        return;
    }
    if (front==0 && rear==4)
    {
        printf("Sorry\nCQueue is already full\n");
        return;
    }
    if (rear==4)
    {
        rear=-1;
    }
    if(front==-1)
    {
        front++;
    }
    /*if(rear+1==front)
    {
        front=front+1;
    }*/

    printf("Enter number\n");
    scanf("%d",&e);
    a[rear+1]=e;

    rear++;

}

void display()
{
    printf("\nStatus\n");
    if(front==-1 && rear==-1)
    {
        return;
    }
    if(rear<front)
    {
        for (i=front;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }
        for (i=0;i<=rear;i++)
    {
        printf("%d\n",a[i]);
    }

    }
    else{
    for (i=front;i<=rear;i++)
    {
        printf("%d\n",a[i]);
    }
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
        printf("No, it is not empty");

    }
}

void isFull()
{
    if (rear==4)
    {

        printf("Stack is FULL!!");
    }
    else
    {
        printf("No, it is not FULL");

    }
}

