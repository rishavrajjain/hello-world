#include<stdio.h>
#include<stdlib.h>

void enqueue_f();
void display();
void dequeue_f();
void dequeue_r();
void enqueue_r();
void isEmpty();
void isFull();



int a[10],i=0,e,n,t,front=-1,rear=-1,s;


main()
{
    int s;
    printf("             17BCE0042\n");
    printf("Enter size\n");
    scanf("%d",&s);

    char option='T';

    while(option=='T')
    {
        printf("\n");
        printf("Enter command (17BCE0042)\n");
        printf("1. InsertInFront\n");
        printf("2. InsertInBack\n");
        printf("3. DeleteInFront\n");
        printf("4. DeleteInBack\n");
        printf("5. Display\n");
        printf("6. isEmpty\n");
        printf("7. isFull\n");
        printf("8. getFront\n");
        printf("9. getRear\n");
        printf("10. Exit\n\n");

        scanf("%d",&n);
        switch(n)
        {

        case 1:
            enqueue_f();
            display();
            break;
        case 2:
            enqueue_r(s);
            display();
            break;
        case 3:
            dequeue_f();
            display();
            break;
        case 4:
            dequeue_r();
            display();
            break;
        case 5:
            display();
            break;
        case 6:
            isEmpty();
            break;
        case 7:
            isFull(s);
            display();
            break;
        case 8:
            printf("\nFront element is %d\n",a[front]);
            break;
        case 9:
            printf("\nRear element is %d\n",a[rear]);
            break;

        case 10:
            printf("        Thankyou!!\n");
            exit(0);
        }
    }

}

void dequeue_f()
{
    if (front==-1)
    {
        printf("Sorry\nQueue is Empty\n");
        return;
    }
    printf("Done\n");

    front++;

}


void dequeue_r()
{
    if (rear==-1)
    {
        printf("Sorry\nQueue is Empty\n");
        return;
    }

    printf("Done\n");

    rear--;

}

void enqueue_f()
{
    if (front==0)
    {
        printf("Sorry\nQueue is already full\n");
        return;
    }
    if(front==-1)
    {
        front++;
        rear++;
        printf("Enter number\n");
        scanf("%d",&e);
        a[front]=e;
        return;

    }
    printf("Enter number\n");
    scanf("%d",&e);
    a[front-1]=e;

    front--;

}

void enqueue_r(int s)
{
    if (rear==s-1)
    {
        printf("Sorry\nQueue is already full\n");
        return;
    }
    if(front==-1)
    {
        front++;
        rear++;
    }
    printf("Enter number\n");
    scanf("%d",&e);
    a[rear+1]=e;

    rear++;

}

void display()
{
    printf("\nStatus\n");
    for (i=front;i<=rear;i++)
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
}

void isFull(int s)
{
    if (rear==s-1)
    {

        printf("Stack is FULL!!");
    }
}


