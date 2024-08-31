#include<stdio.h>
#include<conio.h>
int DATA[100];
int N;
void bubble_sort();
void create_array();
void display_array();
void main()
{
	create_array();
	bubble_sort();
 	display_array();
	getch();
}
void create_array()
{
	int i;
	printf("\nEnter the limit of DATA[N] :  ");
	scanf("\n%d",&N);
	printf("\nEnter unsorted element are DATA[%d] : \n",N);
		for(i=0;i<N;i++)
			scanf("\n%d",&DATA[i]);
}

void display_array()
{
	int k;
	printf("\nThe sorted element are DATA[%d] =",N);
		for(k=0;k<N;k++)
			printf("  %d",DATA[k]);
}

void bubble_sort()
{
    int temp,i,j;
	for(i=0;i<N;i++)
	{
        printf("\n after pass-%d",i+1);
		for(j=0;j<N-i-1;j++)
	    {
      	     printf("\n Comparing between %d and %d",DATA[j],DATA[j+1]);
			if(DATA[j]>DATA[j+1])
			{
			    temp=DATA[j];
			    DATA[j]=DATA[j+1];
		     	DATA[j+1]=temp;
			}
		}
		display_array();
    getch();
   }
}
