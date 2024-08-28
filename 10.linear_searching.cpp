#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 20
void insert();
void linear_search();
int arr[size],num,i,n,found=0,pos=-1;


int main()
{
   insert();
   linear_search();
   getch();
	return 0;
}


void linear_search()
{
printf("\n Enter the number that has  to be searched:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
   {
   printf("\n...........compare between %d and %d",arr[i], num);
		if(arr[i]==num)
		{
			found=1;
			pos=i;
			printf("\n %d is found in the array at position=%d",num,pos+1);
			break;
		}
	}
	if(found==0)
	printf("\n %d does not exist in the array", num);
}



void insert()
{
printf("\n Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
