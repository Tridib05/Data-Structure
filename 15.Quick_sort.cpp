#include<stdio.h>

void quickSort(int [10],int,int);
int list[20],size,i,k;
int main()
{
    printf("\nEnter size of the list: ");
    scanf("%d",&size);
    printf("\nEnter %d integer values: ",size);
    for(i = 0; i < size; i++)
        scanf("%d",&list[i]);
    quickSort(list,0,size-1);
    printf("\nList after sorting is: ");
    for(i = 0; i < size; i++)
        printf(" %d",list[i]);
    getch();
    return 0;
}

void quickSort(int list[10],int first,int last)
{
    int pivot,i,j,temp;
    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;
        printf("\n Pivot=%d, first=%d, last=%d",list[pivot],list[first],list[last]);
        while(i < j)
        {
            while(list[i] <= list[pivot] && i < last)
                i++;
            while(list[j] > list[pivot])
                j--;
            if(i <j)
            {

                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            printf("\n after swap %d and %d  list is:\n",list[j],list[i] );
            for(k = 0; k < size; k++)
                printf(" %d",list[k]);
            getch();
        }
        printf("\n after swap  pivot=%d and right=%d list is:\n",list[pivot],list[j]);
        temp = list[pivot];
        list[pivot] = list[j];
        list[j] = temp;
        for(k = 0; k < size; k++)
            printf(" %d",list[k]);
        getch();
        quickSort(list,first,j-1);
        quickSort(list,j+1,last);
    }
}
