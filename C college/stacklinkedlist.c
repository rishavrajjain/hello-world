#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void creation();
void display();
void peek();
void push();
void pop();
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
    printf("             Welcome\n");

    char option='T';

    while(option=='T')
    {
        printf("\n");
        printf("\n");
        printf("Enter command\n");
        printf("1. Creation\n");
        printf("2. Push\n");
        printf("3. Pop\n");
        printf("4. Display\n");
        printf("5. isEmpty\n");
        printf("6. Peek\n");
        printf("7. Exit\n\n");

        scanf("%d",&n);
        switch(n)
        {

        case 1:
            creation();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            peek();
            break;

        case 7:
            printf("        Thankyou!!\n");
            exit(0);
        }
    }



}


void creation()
{
  while (choice)
    {
        temp  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &temp-> data);
        if (first != 0)
        {
            head->next = temp;
            head = temp;
        }
        else
        {
            first = head = temp;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);

    }
    head->next = 0;
    display();

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


void peek()
{


    temp = first;
    while (temp->next!=0)
    {
        temp = temp -> next;
    }

        printf("Peek is %d",temp->data);

}

void push()
{

        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &temp-> data);
        head->next=temp;
        head = temp;
        head->next = 0;


        fflush(stdin);
        printf("\nDone\n");
        display();

}

void pop()
{
   temp=first;
   while (temp->next->next!=0)
    {
        /*printf("%d=>", temp->data);*/
        count++;
        temp = temp -> next;
    }
    temp->next=0;
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




