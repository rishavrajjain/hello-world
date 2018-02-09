#include<stdio.h>
#include<stdlib.h>



void creation();
void display();
void linear();
void binary();
void dup();
void occ();


int a[10],i=0,e,n,t,top=-1,s,r=5;

main()
{
    printf("             17BCE0042\n");

    char option='T';

    while(option=='T')
    {
        printf("\n");
        printf("Enter command (17BCE0042)\n");
        printf("1. Creation\n");
        printf("2. Display\n");
        printf("3. Binary search\n");
        printf("4. Linear Search\n");
        printf("5. Find Duplicates\n");
        printf("6. Find Occurrence\n");
        printf("7. Exit\n");

        scanf("%d",&n);
        switch(n)
        {

        case 1:
            creation();
            break;
        case 2:
            display();
            break;
        case 3:
            binary();
            break;
        case 4:
            linear();
            break;
        case 5:
            dup();
            break;

        case 6:
            occ();
            break;

        case 7:
            printf("        Thankyou!!\n");
            exit(0);
        }
    }

}
void creation()
{
    printf("Enter your element\n");
    for (i=0;i<r;i++)
    {
        scanf("%d",&e);
        a[i]=e;
    }

}

void display()
{
    printf("\n");
    for (i=0;i<r;i++)
    {
        printf("%d\n",a[i]);
    }

}


void linear()
{
    printf("Enter your element\n");
    scanf("%d",&s);
    int coun=0;
    for (i=0;i<r;i++)
    {
        if(a[i]==s)
        {
         coun++;
         break;

        }
    }
    if (coun>0)
    {
        printf("Element found\n");
    }
    else{
        printf("Element Not found\n");
    }

}

void binary()
{
    int f=0,l=r-1,m= (f+l)/2;

    printf("Enter your element\n");
    scanf("%d",&s);
    int coun=0;

    while(f<=l)
    {
        m= (f+l)/2;
        if (s==a[m])
        {
            coun++;

            break;
        }
        else if(s>a[m])
        {
            f=m+1;
        }
        else if(s<a[m])
        {
            l=m-1;
        }
    }
        if (coun>0)
        {
            printf("Element found\n");
        }
        else{
            printf("Element Not found\n");
        }


}
void dup()
{
    printf("Enter your element\n");
    scanf("%d",&s);
    int coun=0;
    for (i=0;i<r;i++)
    {
        if(a[i]==s)
        {
         coun++;

        }
    }
    if (coun>1)
    {
        printf("Duplicates found %d\n",coun-1);
    }
    else{
        printf("Duplicates Not found\n");
    }

}

void occ()
{
    printf("Enter your element\n");
    int lo=-1,b[10];
    scanf("%d",&s);
    int coun=0;
    for (i=0;i<r;i++)
    {
        if(a[i]==s)
        {
         lo++;
         b[lo]=i;

        }
    }

    printf("First occurrence %d\n",b[0]+1);
    printf("Last occurrence %d\n",b[lo]+1);


}

