# Intro to C for programmers

## 1. Asking the user

You will need variables to store values entered by the user. For example, "int x;" is used to declare a variable named "x" which will store an integer number.

If you want to display the value of a variable, you have to use a "format specifier". For example, the format specifier for an integer number is "%d":  

```c
printf("%d", x);
```

This allows mixing text and data:

```c
printf("The result is %d", x);
```

When you ask the user for values, the format is very similar, but the variable name must be preceded with "&":

```c
scanf("%d", &x);  
```


And you can add comments to the code , delimited between /* and */

```c
/* Contact with the C language */
```

> **Note:** You cannot use **single-line comments** (starting with // ) in most C compilers. The C & C++ compilers might allow them in C source files (although it is a C++ format), and the C99 standard allows it, but most C compilers do not follow (yet?) this standard.


So a program to sum two numbers entered by the user might be like this:

```c
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

    return 0;                              /* End of the program */
}  
```
