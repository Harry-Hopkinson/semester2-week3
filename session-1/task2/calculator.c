
/*
 * Hello world program
 */

#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

int main(void)
{
    printf("Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("0. Exit\n");

    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 0)
    {
        printf("Exiting program\n");
        return 0;
    }

    int a, b;
    printf("Enter two numbers (separated by a space): ");
    scanf("%d %d", &a, &b);
    
    switch (choice)
    {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Result: %d\n", sub(a, b));
            break;
        case 3:
            printf("Result: %d\n", mul(a, b));
            break;
        case 4:
            if (b != 0)
                printf("Result: %d\n", div(a, b));
            else
                printf("Error: Division by zero\n");
            break;

        default:
            printf("\nInvalid choice (enter a number between 0 and 4).\n");
    }

    return 0;
}