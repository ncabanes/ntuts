# Intro to C for programmers

## 8. Contact with functions

In C, "main" is a function, so we already know some of the basics: each function
has a name, is preceded by the name of a data type, which is the type of value
that will be returned.

Also, each function has parenthesis, and between them we'll specify the parameters
which the function will receive, as in this example:

```c
/* First example of functions */

#include <stdio.h>

float sum (float n1, float n2)
{
    return n1+n2;
}

int main()
{
	float f1 = sum(3, 7);
	printf("The sum of 3 and 7 is %f", f1);
    printf("The sum of 4.5 and 6 is %f", sum(4.5, 6));
    return 0;
}
```

A "procedure" or "subroutine" (which takes a few steps but does not return a
value) is declared as a function of type "void":


```c
/* A "void" function */

#include <stdio.h>

void greet(char* name, int times)
{
    int i;
    for (i = 0; i < times; i++)
    {
        printf("Hello %s! ", name);
    }    
}

int main()
{
    greet("Nacho", 5);      
    return 0;
}
```

Functions must be declared before they are used. If we prefer to have "main" 
near the beginning of the program, there is an alternative: including only the 
"prototype" of the program (the first line, with the name, the return data type 
and the type of the parameters), like this:


```c
/* Functions must be declared before used */

#include <stdio.h>

void greet(char*, int); /* Prototype of the function */

int main()              /* Body of the program */
{
    greet("Nacho", 5);      
    return 0;
}

void greet(char* name, int times)  /* Details of the function */
{
    int i;
    for (i = 0; i < times; i++)
    {
        printf("Hello %s! ", name);
    }    
}
```


#### Suggested exercises:

- C.08.01. Create a function "multiply" which will receive two integer numbers as parameters and return their product. Use it to display the product of 23 and 26.

- C.08.02. Create a function "countLetter" which will receive a string and a char and return the amount of times that the char is in the string. Use it to amount of "l" in "Hello".

- C.08.03. Create a new version of the previous exercise, including the function body after "main".
