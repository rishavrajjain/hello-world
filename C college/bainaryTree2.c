#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}NODE;
NODE *root=0,*temp=0,*curr=0;

void pre();
void post();
void infix();
void insert();
void rep();
void rep2();
void infix2();
void deleted();

int n=0;


void main()
{
    printf("             17BCE0042\n");

    char option='T';




    while(option=='T')
    {
        printf("\n");
        printf("Enter command\n");
        printf("1. Create tree\n");
        printf("2. Display in Pre order\n");
        printf("3. Display in Post order\n");
        printf("4. Display in In order\n");
        printf("5. Insert \n");
        printf("6. Exit\n");


        scanf("%d",&n);
        switch(n)
        {

        case 1:
            temp=root;
            insert(temp);
            break;
        case 2:
            temp=root;
            pre(temp);
            break;
        case 3:
            temp=root;
            post(temp);
            break;
        case 4:
            temp=root;
            infix(temp);
            break;
        case 5:
            temp=root;
            insert(temp);
            break;
        case 6:
            temp=root;
            deleted(temp);
            break;

        case 7:
            printf("        Thankyou!!\n");
            exit(0);

        }
    }

}



void rep(NODE *temp, NODE *curr)
{
            if(temp->data<curr->data)
            {
                if(curr->left==NULL)
                {
                    curr->left=temp;
                    curr=temp;

                }
                else
                {
                    curr=curr->left;
                    rep(temp,curr);
                }

            }
            else{
                rep2(temp,curr);
            }
}

void rep2(NODE *temp, NODE *curr)
{
            if(temp->data>curr->data)
            {
                if(curr->right==NULL)
                {
                    curr->right=temp;
                    curr=temp;

                }
                else
                {
                    curr=curr->right;
                    rep2(temp,curr);
                }

            }
            else
            {
             rep(temp,curr);
            }
}


void pre(NODE *bt)
{
if (bt == NULL)
{
   return;
}
printf("\n%d\n",bt->data);
pre(bt->left);
pre(bt->right);
}


void post(NODE *bt)
{
if (bt == NULL)
{
   return;
}
post(bt->left);
post(bt->right);
printf("\n%d\n",bt->data);

}


void infix(NODE *bt)
{
if (bt == NULL)
{
   return;
}
infix(bt->left);
printf("\n%d\n",bt->data);
infix(bt->right);
}

void insert(NODE *curr)
{
  char choice='y';

  while (choice!='n')
    {

    temp  = (NODE *)malloc(sizeof(NODE));
    printf("Enter the data item\n");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;

    if (root != 0)
        {
            if(temp->data<curr->data)
            {
            rep(temp,curr);
            }


            else if(temp->data>curr->data)
            {
                rep2(temp,curr);

            }
        }

    else
        {
            root=curr=temp;
        }

    fflush(stdin);
    printf("Do you want to continue(Type y or n)?\n");
    scanf("%c", &choice);

    }
}

void infix2(NODE *bt,int temp2)
{
if (bt == NULL)
{
   return;
}
infix2(bt->left,temp2);
if(temp2==bt->data)
{
    if(bt->right==NULL && bt->left==NULL)
    {
        free(bt);
        printf("Done");
        return;

    }
    else if(bt->right==NULL)
    {

    }

}
infix2(bt->right,temp2);
}

void deleted(NODE *bt)
{
  char choice='y';
  int temp2;
  printf("Enter the data item\n");
  scanf("%d", &temp2);
  infix2(bt,temp2);

}

