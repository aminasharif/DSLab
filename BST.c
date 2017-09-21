//PROGRAM TO IMPLEMENT BINARY SEARCH TREE
#include<stdio.h>
#include<stdlib.h>

typedef struct bst
{
	int data;
	struct bst *left,*right;
}node;

void traverse_inorder(node *q)
{  if(q!=NULL)
	{
	traverse_inorder(q->left);
	printf("%d\t",q->data);
	traverse_inorder(q->right);
	}
}

void insert(node **r,int num)
{
	node *temp,*ptr;
	temp=*r;
	
	if(temp==NULL)
	 *r=ptr;
	else
	{
		if(num > temp->data)
		{
			if(temp->right==NULL)
			{
				ptr=(node*)malloc(sizeof(node));
				ptr->data=num;
				ptr->left=NULL;
				ptr->right=NULL;
				temp->right=ptr;
				return;
			}
			else
			{
				temp=temp->right;
				insert(&temp,num);
			}
		}
		else
		{
			if(temp->left==NULL)
			{
				ptr=(node*)malloc(sizeof(node));
				ptr->data=num;
				ptr->left=NULL;
				ptr->right=NULL;
				temp->left=ptr;
				return;
			}
			else{
				temp=temp->left;
				insert(&temp,num);
			}
			
	}
}


int search_bst(node *q)
{
	if(q==NULL)
	 return -1;
	else
	{
		if(q->data==num)
		return 1;
		else
		{
			if(num > temp->data)
			{
				search_bst(q->right);
			}
			else
			{
				search_bst(q->left);
			}
		}
	}
}


void delete(node **q,int num)
{
	node *temp;
	temp=*q;
		if(temp==NULL){
		printf("\nTHE GIVEN NUMBER IS NOT FOUND");
		return;
	}
		else
		{
			if(temp->data==num)
			{
				if(temp->left==NULL&&temp->right==NULL)
					free(temp);
					
				return;
			}
			else
			{
				if(num > q->data)
				{
					delete(q->right,num)
				}
				else{
					delete(q->left,num);
				}
			}
		}
	}




int main()
{
	node *root;
	root=NULL;
	insert(&root,5);
	insert(&root,6);
	insert(&root,7);
	traverse_inorder(root);
	if(search_bst(root,8)==1){
	   printf("\nTHE NUMBER %d IS PRESENT IN THE TREE",8);
	   else
	   printf("\nNUMBER IS NOT FOUND");
	  }
	return 0;
}
