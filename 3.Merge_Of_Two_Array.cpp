
#include <stdio.h>
#include <conio.h>
int Arr1[10],Arr2[10],Arr3[20];
int n1 = 4;
int n2 = 4;
int p =0;
int m = n1 + n2;

void Traverse();
void merge();
void Insert();

void Insert() // function definition
{
    for (int i = 0; i < n1; i++)
    {
        printf("Enter Values at Arr1[%d]=\n",i);
        scanf("%d",&Arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        printf("Enter Values at Arr2[%d]=\n",i);
        scanf("%d",&Arr2[i]);
    }
}
void Traverse() // function definition
{
    printf("\nAfter mergin of Arr1 and Arr2 The elements of Arr3 is:\n");
    for (int k = 0; k < p; k++)
    {
        printf("\t%d", Arr3[k]);
    }
    printf("\n");
}

void merge()
{
    int i, j;
    int q = 0;
    for (i = 0; i < n1; i++)
    {
        Arr3[i] = Arr1[i];
    }
    for (j = i; j < m; j++)
    {
        Arr3[j] = Arr2[q];
        q++;
    }
    p=m;
}

int main()
{
    Insert();
    merge();
    Traverse();
    getch();
    return 0;
}
