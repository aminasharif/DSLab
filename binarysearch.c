#include<stdio.h>
#define max 100

int binary_search(int a[],int n,int x)
{
	int mid=n/2;
	int high=n-1,low=0;
	while(high>=low){
		if(a[mid]==x)
			return 1;
		if(x>a[mid])
			low=mid+1;
		else
			high=mid-1;
		mid=(low+high)/2;
		}
		return -1;
	}
	
	
int main()
{
	int a[max],i,x,n,index;
	printf("\nEnter the no of elements of array\n");
	scanf("%d",&n);
	printf("\nEnter the elements of array\n");
	for(i=0;i<n;i++)
	{
		printf("%d",&a[i]);
	}
	printf("\nEnter the element to be searched\n");
	scanf("%d",&x);
	index=binary_search(a,n,x);
	if(index==-1)
		{
			printf("Element %d not found",&x);
		}
	else
	return 0;
	
	
	
	
	
	
	
	}
