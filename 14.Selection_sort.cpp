#include<stdio.h>

void selection_sort(int [], int);
int min(int [], int, int);

int main()
{
    int a[10], i, N;
    N = 8;
    printf("\nEnter %d elements to sort:\n", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    selection_sort(a, N);

    printf("\n\nThe sorted list is:\n");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);

    return 0;
}

void selection_sort(int *array, int N)
{
    int i, loc, temp;
    for(i = 0; i < N - 1; i++) 
    {
        loc = min(array, i, N);
        printf("\nStep %d: Minimum value found is %d at index %d", i+1, array[loc], loc);

        temp = array[loc];
        array[loc] = array[i];
        array[i] = temp;

        printf("\n\nThe partially sorted list is:\n");
        for(int j = 0; j < N; j++) 
            printf("%d ", array[j]);   
    }
}

int min(int *array, int low_bound, int up_bound)
{
    int min = low_bound;
    for(int i = low_bound + 1; i < up_bound; i++) 
    {
        if(array[i] < array[min])
            min = i;
    }
    return min;
}
