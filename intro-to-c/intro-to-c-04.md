# Intro to C for programmers

## 4. Conditions

Simple conditions can be checked with "if (condition) sentence;", as in this example:

```
#include <stdio.h>

int main()
{
    int x = 5;
    if (x >= 0)
        printf("x is positive or zero\n");
    return 0;
}
```

We can tell what should be done if the condition is no true, with "else":

```
#include <stdio.h>

int main()
{
    int x = 5;
    if (x >= 0)
        printf("x is positive or zero\n");
    else
        printf("x is negative\n");
    return 0;
}
```

Alsso, we might need to check several conditions at a time, joined with "and"
(&&), "or" (||) and "not" (!), as in this example:

```
#include <stdio.h>

int main()
{
    int x = 5, y = 7;

    if ((x > 0) && (y > 0))
        printf("x and y are positive\n");

    if ((x > 0) || (y > 0))
        printf("either x is positive or y is positive\n");

    if ( ! (x > 0) )
        printf("x is not positive\n");

    return 0;
}
```



A common expression is "if (condition) x = a ; else x = b;", which can be shortened 
with the "ternary operator" or "conditional operator": "x = (condition) ? a : b", 
as in this example:

```
#include <stdio.h>

int main()
{
    int x = 5, y = 6;
    int greatest;
    
    /* Obtaining the greatest number with "if" */
    if (x > y)
        greatest = x;
    else
        greatest = y;
        
    /* Obtaining the greatest number with "?" */
    greatest = x > y ? x : y;

    return 0;
}
```



If a single variable may have several different values, we might prefer to
use "switch":

```
#include <stdio.h>

int main()
{
    int x = 5;
    switch(x)
    {
        case 5: printf("x is five\n"); break;
        case 6: printf("x is six\n"); break;
        default: printf("x is not five nor six\n"); break;
    }

    return 0;
}
```



So a complete example might look like this:

```
/* Conditions */

#include <stdio.h>

int main()
{
    int x = 5, y = 6;
    if (x >= 0)
        printf("x is positive or zero\n");
    else
        printf("x is negative\n");
        
    int greatest = x > y ? x : y;
    
    switch(x)
    {
        case 5: printf("x is five\n"); break;
        case 6: printf("x is six\n"); break;
        default: printf("x is not five nor six\n"); break;
    }

    return 0;
}
```



#### Suggested exercises:

- C.04.01. Ask the user for a number and answer if it is greater than 10 or not.

- C.04.02. Ask the user for a number and answer if it is an even number or not (hint: remember that x is an even number when x % 2 is 0).

- C.04.03. Ask the user for two numbers and answer how many of them are positive, using "if".

- C.04.04. Ask the user for two numbers and answer how many of them are positive, using the ternary operator.

- C.04.05. Ask the user for a number from 1 to 5 and spell it (for example, if the user enters 2, your program will display "two").
