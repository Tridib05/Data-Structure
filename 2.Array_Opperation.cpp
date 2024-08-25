
#include <stdio.h>
#include <conio.h>

void Traverse(); // function declaration
void Insert();   // function declaration
void Delete();
void Delete_pos();

// global variable declaration
int i, k;
int Arr[10]; // Declare Arr as an array
int n = 4;   // Initial number of elements in the array

void Traverse() // function definition
{
    printf("\nThe elements of Arr are:\n");
    for (i = 0; i < n; i++) // Loop should go from 0 to n-1
    {
        printf("\t%d", Arr[i]);
    }
    printf("\n");
}

void Insert() // function definition
{
    printf("\nInsert values into Arr:\n");
    for (i = 0; i < n; i++) // Loop should go from 0 to n-1
    {
        printf("Arr[%d] = ", i);
        scanf("%d", &Arr[i]);
    }
}

void Delete() // function definition
{
    if (n > 0) // Check if there are elements to delete
    {
        k = n - 1;
        printf("\nAfter deleting an element from the end...\nThe present array is:\n");
        for (i = 0; i < k; i++) // Loop should go from 0 to k-1
            printf("\nElement of Arr[%d] = %d", i, Arr[i]);
        n--; // Decrease the size of the array
    }
    else
    {
        printf("\nArray is empty, cannot delete.\n");
    }
}

void Delete_pos() // function definition
{
    int pos;
    printf("\nEnter the array position/index to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= n) // Check for valid position
    {
        printf("\nInvalid position!\n");
        return;
    }

    for (int j = pos; j < n - 1; j++)
    {
        Arr[j] = Arr[j + 1]; // Shift elements to the left
    }
    n--; // Decrease size after deletion

    printf("\nAfter deleting an element from the array at location [%d]...\nThe present array is:\n", pos);
    Traverse(); // Display updated array after deletion
}

int main()
{
    Insert();   // function call
    Traverse(); // function call
    Delete_pos(); // function call to delete at specific position
    Delete(); // function call to delete from the end
    getch(); // Wait for a key press
    return 0;
}
