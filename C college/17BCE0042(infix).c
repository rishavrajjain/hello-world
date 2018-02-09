#include<stdio.h>
char stack[20];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}

main()
{
    char exp[20];
    char *temp, x;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    temp = exp;
    while(*temp != '\0')
    {
        if(isalnum(*temp))
            printf("%c",*temp);
        else if(*temp == '(')
            push(*temp);
        else if(*temp == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*temp))
                printf("%c",pop());
            push(*temp);
        }
        temp++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
}
[5:38 PM, 1/14/2018] Anuj N 1013: 3.(b)
#include<stdio.h>
#include<ctype.h>
#define MAXSTACK 100
#define POSTFIXSIZE 100

 int stack[MAXSTACK];
 int top = -1 ;
 void push(int item)
 {

	 if(top >= MAXSTACK -1)
	 {
		 printf("stack over flow");
		 return;
	 }
	 else
	 {
		 top = top + 1 ;
		 stack[top]= item;
	 }
 }
 int pop()
 {
	 int item;
	 if(top <0)
	 {
		printf("stack under flow");
	 }
	 else
	 {
		 item = stack[top];
		 top = top - 1;
		 return item;
	 }
 }
 void EvalPostfix(char postfix[])
 {

	int i ;
	char ch;
	int val;
	int A, B ;

	for (i = 0 ; postfix[i] != ')'; i++)
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			A = pop();
			B = pop();

			switch (ch)
			{
				case '*':
				val = B * A;
				break;

				case '/':
				val = B / A;
				break;

				case '+':
				val = B + A;
				break;

				case '-':
				val = B - A;
				break;
			}
			push(val);
		}
	}
	printf( " \n Result of expression evaluation : %d \n", pop()) ;
 }

 int main()
 {

	int i ;
	char postfix[POSTFIXSIZE];
	printf( " \nEnter postfix expression,\npress right parenthesis ')' for end expression : ");
    for (i = 0 ; i <= POSTFIXSIZE - 1 ; i++)
	{
		scanf("%c", &postfix[i]);

		if ( postfix[i] == ')' )
		{
		    break;
        }
	}
    EvalPostfix(postfix);
    return 0;
 }
