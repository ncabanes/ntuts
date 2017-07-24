/* Contact with the C language */

#include <stdio.h>

int main()    /* Body of the program */
{
    int firstNumber, secondNumber, sum;     /* Variables */

    printf("Enter the first number: ");     /* printf: Display text */
    scanf("%d", &firstNumber);              /* scanf: Get data from the user */
                                            /* (note the "&" before the name ) */
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    
    sum = firstNumber + secondNumber;       /* Calculations using variables */
    printf("Their sum is %d", sum);         /* Displaying text and data */

    return 0;                               /* End of the program */
}  

