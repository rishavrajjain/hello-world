#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void newnode();
void display();
void insertion_b();
void insertion_e();

typedef struct node
{
    int data;
    struct node *next;
}NODE;

int count = 0;
int choice = 1,n=0;
NODE *head, *first=0, *temp = 0;


void main()
{
    printf("             Welcome\n");

    char option='T';




    while(option=='T')
    {
        printf("\n");
        printf("Enter command\n");
        printf("1. New node\n");
        printf("2. Display\n");
        printf("3. Insert Beginning\n");
        printf("4. Insert End\n");
        printf("5. Exit\n\n");

        scanf("%d",&n);
        switch(n)
        {

        case 1:
            newnode();
            break;
        case 2:
            display();
            break;
        case 3:
            insertion_b();
            break;
        case 4:
            insertion_e();
            break;

        case 5:
            printf("        Thankyou!!\n");
            exit(0);
        }
    }



}


void newnode()
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


void insertion_b()
{

        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &temp-> data);
        temp->next=first;
        first = temp;

        fflush(stdin);
        printf("\nDone\n");

}

void insertion_e()
{

        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &temp-> data);
        head->next=temp;
        head = temp;
        head->next = 0;


        fflush(stdin);
        printf("\nDone\n");

}



