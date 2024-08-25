/*
    Date-24/07/2024
    Write a c program to implement Basic arithmetic operation like Addition, subtraction, division using user-defined functions respectively. 
    Here give provision to insert input values from user-end at Runtime
*/
#include <stdio.h>
#include <conio.h>

// Declaration of functions for arithmetic operations
void sum();
void sub();
void mul();
void div();

int main()
{
    // Calling each arithmetic function
    sum();
    sub();
    mul();
    div();
    return 0;  // Return 0 to indicate successful execution
}

void sum()
{
    int x, y, sum;
    // Prompting user to enter the value of x
    printf("\nEnter the value of x :");
    // Reading the value of x from user input
    scanf("%d", &x);
    // Prompting user to enter the value of y
    printf("\nEnter the value of y :");
    // Reading the value of y from user input
    scanf("%d", &y);
    // Performing the addition of x and y
    sum = x + y;
    // Displaying the result of the addition
    printf("\nThe Addition of x+y = %d\n", sum);
}

void sub()
{
    int x, y, sub;
    // Prompting user to enter the value of x
    printf("\nEnter the value of x :");
    // Reading the value of x from user input
    scanf("%d", &x);
    // Prompting user to enter the value of y
    printf("\nEnter the value of y :");
    // Reading the value of y from user input
    scanf("%d", &y);
    // Performing the subtraction of y from x
    sub = x - y;
    // Displaying the result of the subtraction
    printf("\nThe Subtraction of x-y = %d\n", sub);
}

void mul()
{
    int x, y, mul;
    // Prompting user to enter the value of x
    printf("\nEnter the value of x :");
    // Reading the value of x from user input
    scanf("%d", &x);
    // Prompting user to enter the value of y
    printf("\nEnter the value of y :");
    // Reading the value of y from user input
    scanf("%d", &y);
    // Performing the multiplication of x and y
    mul = x * y;
    // Displaying the result of the multiplication
    printf("\nThe Multiplication of x*y = %d\n", mul);
}

void div()
{
    int x, y, div;
    // Prompting user to enter the value of x
    printf("\nEnter the value of x :");
    // Reading the value of x from user input
    scanf("%d", &x);
    // Prompting user to enter the value of y
    printf("\nEnter the value of y :");
    // Reading the value of y from user input
    scanf("%d", &y);
    // Performing the division of x by y
    div = x / y;
    // Displaying the result of the division
    printf("\nThe Division of x/y = %d\n", div);
}
