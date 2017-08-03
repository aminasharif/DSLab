#include<stdio.h>
#include<ctype.h>
#define MAX 100
typedef struct conversion
{
	char a[30];
	int top;
}stack;


void checkContinuity(char exp[]);

int isMatchingPair(char left,char right);

void push(char, stack *s);

int pop(stack *s);

int main()
{
	char exp[30];
	int result;
	printf("ENTER AN EXPRESSION CONTAINING ONLY BRACKETS\n");
	scanf("%s",exp);
	result=checkContinuity(exp);
	return 0;
}
int pop(stack *s)
{
    int d,top=s->top;
    if(top!=-1)
    {
		d=s->a[top];
        s->top=s->top-1;
		return d;
    }
}

void push(char e, stack *s)
{
    int top=s->top;
    if(top<29)
	{
		s->a[++(s->top)]=e;
	}
}

int isMatchingPair(char left,char right)
{
	 switch(left)
	  {
		  case'(':
		   if(right==')')
		      return 1;
		   else
		      return 0;
		  case')':
		   if(right=='(')
		      return 1;
		   else
		      return 0;
		  case'{':
		   if(right=='}')
		      return 1;
		   else
		      return 0;
		  case'}':
		   if(right=='{')
		      return 1;
		    else
		      return 0;
	      default:
	        return 0;  //INVALID CASE
	   }
}
void checkContinuity(char exp[])
{
	int i;
	char c;
	stack s->top=-1;
	  for(i=0;exp[i]!=0;i++)
	   {
		   if(exp[i]=='('||exp[i]==')'||exp[i]=='{'||exp[i]=='}')
		      push(&s,exp[i]);
		   else
		     {
				 if(s.top==-1)
				  printf("INVALID");
				 else
				   {
                                 c=pop(&s);
				 if(isMatchingPair(c,exp[i]))
				   continue;
				 else
				  printf("\nINVALID\n");
                             return;
			  }
	    }
}
 
 if(s,top==-1)
  {
	  printf("EXPRESSION IS VALID");
	   else
	  printf("EXPRESSION IS INVALID");
  }
