#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void newnode();
void display();
void enqueue();
void dequeue();
void peek();
void isEmpty();


typedef struct node
{
    int data;
    struct node *next;
}NODE;

int count = 0;
int choice = 1,n=0,x=0;
NODE *head, *first=0, *temp = 0,*temp2 = 0,*temp3 = 0;


void main()
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
        printf("5. Peek\n");
        printf("6. Exit\n\n");

        scanf("%d",&n);
        switch(n)
        {


        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            peek();
            break;

        case 6:
            printf("        Thankyou!!\n");
            exit(0);
        }
    }

}


void display()
{
    count=0;
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->data);
        count++;
        temp = temp -> next;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);

}


void enqueue()
{

        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &temp-> data);

        if (first != 0)
        {
        head->next=temp;
        head = temp;
        head->next = 0;

        }
        else
        {
            first = head = temp;
            head->next = 0;
        }




        fflush(stdin);
        printf("\nDone\n");
        display();

}



void peek()
{

    if (first != 0)
    {
        temp = first;
        while (temp->next!=0)
        {
        temp = temp -> next;
        }

        printf("Peek is %d",temp->data);

    }
    else
    {
        printf("List is empty");
    }


}

void dequeue()
{

        temp=first;
        first = temp->next;

        fflush(stdin);
        printf("\nDone\n");
        display();

}
void isEmpty()
{
    count=0;
    temp = first;
    printf("\n Status \n");
    while (temp != 0)
    {
        count++;
        temp = temp -> next;
    }
    if(count>0)
    {
        printf("It is not Empty");
    }
    else{
    printf("It is empty\n");
    }

}



