#include<stdio.h>
#include<ctype.h>
char b[10];
int top=-1;
char a[10];

void pop()
{
    while(b[top]!='(')
    {
        printf("%c",b[top]);
        top--;
    }
    top--;
}

/*priority*/

void priority(char r)
{
if (r=='+' || r=='-')
{
    return 1;
}
else if (r=='(' || r==')')
{
    return 0;
}
else if (r=='*' || r=='/')
{
    return 2;
}
}




void popf()
{
    while(top!=-1)
    {
        if(b[top]!='(' || b[top]!=')')
        {
        printf("%c",b[top]);
        top--;
        }
        else
        {
            top--;
        }
    }

}



void push(char r)
{
    b[top+1]=r;

    top++;

}

int main()
{

      int i=0;
      char x;
      scanf("%s",&a);
      while(a[i]!='\0')
      {

       if(isalnum(a[i]))
       {
          printf("%c",a[i]);
       }
       else if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='(' )
       {
           push(a[i]);
       }
     /* else if(a[i]==')')
      {
          pop();
      }*/
      else if(a[i]== ')')
        {
            pop();
        }
        else
        {
            while(priority(a[top]) >= priority(a[i]))
                pop();
            push(a[i]);
        }

      i++;
      }
      popf();
}
