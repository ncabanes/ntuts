# Intro to C for programmers

## 10. Common bugs

There are a few bugs I frequently see in my students' exercises. Let's have a 
look at them and then comment what is the problem with each one of them.

This is the first one, and probably de most common one, a loop from 0 to 9 
which does not work properly:

```c
/* 
 * Common bugs 01 
 * This loop displays the numbers 0 to 9...
 *     or maybe not...
 */

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++);
    {
        printf("%d ", i);
    }

    return 0;
}

```

> Hint: Look at the semicolons...

Comparisons are also a frequent source for bugs, as in this example:

```c
/* 
 * Common bugs 02 
 * Is x 2 or not?
 */

#include <stdio.h>

int main()
{
	int x=2;

    if (x=1)
        printf("x is 1");
    else
		printf("x is not 1");

    return 0;
}

```
> Hint: are we really comparing? Or are we assigning a new value?


Also, the incorrect usage of braces and indentation can lead to bugs which 
sometimes are hard to spot for a beginner:

```c
/* 
 * Common bugs 03 
 * Easy: a blank after each number...
 *     or maybe not...
 */

#include <stdio.h>

int main()
{
	int i;

    for (i = 0; i < 10; i++)
        printf("%d", i);
        printf(" ");

    return 0;
}

```

> Hint: are we really repeating both "printf" commands?


When you start feeling proficient with loops, changing the direction can lead 
to new problems:


```c
/* 
 * Common bugs 04
 * A countdown... perhaps...
 */

#include <stdio.h>

int main()
{
	int i;

    for (i=10; i<=0; i--)
        printf("%d ", i);

    return 0;
}

```

> Hint: Which should be the correct condition for the loop repetition when the variable value is decreasing?


And finally, a fifth bug, less common than the previous ones:

```c
/* 
 * Common bugs 05
 * A second countdown... perhaps...
 */

#include <stdio.h>

int main()
{
	int i;

    for (i=10; i>=0; i-1)
        printf("%d ", i);

    return 0;
}

```
> Hint: if we write "i-1", are we really changing the value for "i"?


#### Suggested exercises:

- C.10.01. Create the corrected version of the previous 5 source files
