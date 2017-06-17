# Intro to C for programmers

## 3. There are no "booleans" in C

There is no "boolean" data type in C. Instead, we must use integer numbers. A value of 0 is considered "false", and any other value is considered "true", as in this example:

```
/* No booleans! */

#include <stdio.h>

int main()
{
    int i = 10;
    
    do
    {
		printf("%d ", i);
		i--;
	}
	while(i);      /* 0 = false */
	
	printf("\n");  /* new line */
	
	while(1)
	{
		           /* endless loop! */
	}

    return 0;
}

```

#### Suggested exercises:

- C.04.01. Ask the user for integer numbers. You must display each number squared. Your program end when the program entered is 0. Use then entered number as exit condition.
