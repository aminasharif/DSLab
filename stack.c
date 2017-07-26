#include<stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1
int isFull(){
	//returns 1 if stack is full else returns -1
	   if(top==MAX_SIZE -1)
	     return 1;
	   else
	     return -1;
}
	int isEmpty(){
		//returns 1 if stack is empty else returns -1
			if(top==-1)
				return 1;
			else
				return -1;
	}
	int peek(){
		//return element at the top of stack
			return stack[top];
	}
	void push(int e){
		//inserts an element into stack
		if(!=isFull)
			{
				top++;
					stack[top]=e;
						printf("Element is successfully inserted");
			}
		else
			printf("Stack overflow");
	}
	
	void pop(){
		//deletes an element from top of stack
		if(!=isEmpty)
		 {
			int d;=stack[top];
				top--;
					printf("Element is successfully deleted");
	      }
	     else
	      printf("Stack underflow");
	}
	 int main()
	 {
		 int choice,e;
		   do
		     {
				   printf("menu\n1.peek\n2.push\n3.pop\n4.exit\n");
				   printf("Enter your choice");
				   scanf("%d",&choice);
				    switch(choice)
				     {
						 case1:peek();
						 break;
						 case2:push();
						 break;
						 case3:pop();
						 break;
						 case4:exit();
						 break;
					        default:invalid choice				
		                   }
	}
         while(1);
		return 0;
}
