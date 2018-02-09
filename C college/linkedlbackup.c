#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void newnode();
void display();
void insertion_b();
void insertion_e();
void insertion_m();
void insertion_d();
void delet_b();
void delet_e();
void delet_m();
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
        printf("Enter command\n");
        printf("1. New node\n");
        printf("2. Display\n");
        printf("3. Insert Beginning\n");
        printf("4. Insert End\n");
        printf("5. Insert Middle\n");
        printf("6. Insert By Data\n");
        printf("7. Delete Beginning\n");
        printf("8. Delete End\n");
        printf("9. Delete Middle\n");
        printf("10. Exit\n\n");

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
            insertion_m();
            break;
        case 6:
            insertion_d();
            break;
        case 7:
            delet_b();
            break;
        case 8:
            delet_e();
            break;
        case 9:
            delet_m();
            break;

        case 10:
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


void insertion_b()
{

        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &temp-> data);
        temp->next=first;
        first = temp;

        fflush(stdin);
        printf("\nDone\n");
        display();

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
        display();

}


void insertion_m()
{


    count=0;
    temp = first;
    while (temp != 0)
    {
        count++;
        temp = temp -> next;
    }


     if(count%2==0)
     {
         x=count/2;
         temp = first;

         while(x-1>0)
         {
             temp = temp -> next;
             x--;
         }



     }
     else
     {

         x=(count+1)/2;
         temp = first;

         while(x-1>0)
         {
             temp = temp -> next;
             x--;
         }
     }

        temp3=temp->next;
        temp2 = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &temp2-> data);
        temp->next=temp2;
        temp2->next=temp3;


        fflush(stdin);
        printf("\nDone\n");
        display();

}

void insertion_d()
{
    temp = first;

    temp2 = (NODE *)malloc(sizeof(NODE));
    printf("Enter the data item\n");
    scanf("%d", &temp2-> data);

    while (temp2->data > temp->next->data)
    {
        temp = temp -> next;
    }


    temp3=temp->next;
    temp->next=temp2;
    temp2->next=temp3;


    fflush(stdin);
    printf("\nDone\n");
    display();


}

void delet_b()
{

        temp=first;
        first = temp->next;

        fflush(stdin);
        printf("\nDone\n");
        display();

}
void delet_e()
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
void delet_m()
{

       count=0;
    temp = first;
    while (temp != 0)
    {
        count++;
        temp = temp -> next;
    }


     if(count%2==0)
     {
         x=count/2;
         temp = first;

         while(x-1>0)
         {
             temp = temp -> next;
             x--;
         }



     }
     else
     {

         x=(count+1)/2;
         temp = first;

         while(x-2>0)
         {
             temp = temp -> next;
             x--;
         }
     }

        temp3=temp->next;
        temp->next=temp3->next;


        fflush(stdin);
        printf("\nDone\n");
        display();

}


