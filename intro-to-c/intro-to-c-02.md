# Intro to C for programmers

## 02. Contact with loops

The most common loop is probably the "for" loop, used mostly to "count". In languages such as BASIC, its syntax is very easy to follow:

```visualbasic
FOR i = 1 TO 10: PRINT i: NEXT i
```

In C and the languages which derive from it, the syntax is not so obvious, as there are three parts: initializing the variable ("i=1"), checking the repeating condition ("i<=10") and incrementing the variable ("i++", which is the same as "i=i+1"):

```c
int i;

for (i = 1; i <= 10; i++)
    printf("%d ", i);
```

In modern C compilers (following the C99 standard), the variable can be declared in the initializacion block, but you should avoid this construction is backwards compatibility is a must for your project (and it frequently is, for C projects).

```c
for (int i = 1; i <= 10; i++)
    printf("%d ", i);
```

So a full program counting from 1 to 10 might look like this:

```c
/* Counting: the "for" loop */

#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
        printf("%d ", i);
    
    /* 
    Note:
    Most C compilers do not allow "for(int i=1;...")
    (notation introduced in C99)
    */

    return 0;
}
```
