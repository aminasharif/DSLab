#include<stdio.h>
#include<math.h>
#define MAX_SIZE 20
int hash(int k){
	return k%MAX_SIZE
}
int linear_probe(int h){
	return ++h%MAX_SIZE;
}
int quadratic_probe(int h,int i){
	return h+pow(i,2)%MAX_SIZE;
}
int double_hash(int h,int i){
	return (h+i*linear_probe(h))%MAX_SIZE;
}

void display(int a[]){
	int i;
	printf("\nThe elements of array are");
	for(i=0;i<MAX_SIZE;i++)
	printf("%d"\t,a[i]);
}
int main(){
	      int a[20],i,h,e;
	      for(i=0;i<20;i++)
	      a[i]=-1;
	      do{
	         printf("\nEnter the number to be stored");
	         scanf("%d",&e);
	         h=hash(e);
	         if(a[h]==-1){
	         a[h]=e;
	         display(a);
		  }
	      else
	      {
		   while(count<MAX_SIZE)
		   {
		    count++;
		    printf("\nEnter\n1.linear probe\t2.quadratic probe\t3.double hashtag\n");
		    printf("\nEnter your choice");
		    scanf("%d",&choice);
		    switch(choice)
		    {
				case1:
				h=linear_probe(h);
				break;
				case2:
				h=quadratic_probe(h,count);
				break;
				case3:
				h=double_hash(h,count);
				break;
				default:
				printf("\nInvalid choice");
				count--;
				break;
			}
		    if(a[h]==-1)
		    {
		     a[h]=e;
		     display(a);
		     break;
	        }
           }
          }
         if(count==20)
         {
	      printf("\nArray is full");
	      return 0;
         }
             }while(1);
}   
