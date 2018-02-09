#include<stdio.h>
#include<stdlib.h>
void creation();
void delet();
void display();
void insert();
void update();

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
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Insert\n");
        printf("5. Update\n");
        printf("6. Exit\n");

        scanf("%d",&n);
        switch(n)
        {

        case 1:
            creation();
            break;
        case 2:
            delet();
            display();
            break;
        case 3:
            display();
            break;
        case 4:
            insert();
            display();
            break;
        case 5:
            update();
            display();
            break;

        case 6:
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
void delet()
{
    printf("Enter your position\n");
    scanf("%d",&t);
    for (i=t-1;i<top;i++)
    {
        a[i]=a[i+1];
    }
    top--;
}
void insert()
{
    printf("Enter your position\n");
    scanf("%d",&t);
    printf("Enter number\n");
    scanf("%d",&e);
    for (i=top;i>t-2;i--)
    {
        a[i+1]=a[i];
    }
    top++;
    a[t-1]=e;
}
void update()
{
    printf("Enter your position\n");
    scanf("%d",&t);
    printf("Enter number\n");
    scanf("%d",&e);
    a[t-1]=e;
}
void display()
{
    printf("\nStatus\n");
    for (i=0;i<=top;i++)
    {
        printf("%d\n",a[i]);
    }
}

