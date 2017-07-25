# Intro to C for programmers

## 6. Arrays and pointers

An array is In C, a collection of elements. all of which are the same tyoe of data.
They are declared
"string" is just an array of chars. The predefined functions expected
theses string to be null-terminated (the last char must be a null character, \0),
as in this example:

```c
int data[5];
```

And they can be traversed using a "for" loop:

```c
for (i = 0; i < 5; i++)
{
    data[i] = i*2;
}
```

It is usual declaring a "constant" for the size of the array, so that it needs
to be changed only once. A constant can be declared in a couple of ways, but a
very common one is using "#define", as in this example:

```c
#define MAX 5
/* ... */
int data[MAX];
for (i = 0; i < MAX; i++)
{
    data[i] = i*2;
}
```

And we can use pointers to access an array, too (if you don't know what a
pointer is, you can skip the next example: they are not easy, so they will not
be explained in such a short intro):


```c
int *pointerToData;
/* ... */
pointerToData = data;
for (i = 0; i < MAX; i++)
{
    printf("%d ", *(pointerToData+i));
}
```

A complete example might look like this:

```c
/* Arrays and pointers */

#include <stdio.h>

#define MAX 5

int main()
{
    int data[MAX];
    int *pointerToData;
    int i;
    
    /* An array can be accessed as an array, of course... */
    for (i = 0; i < MAX; i++)
    {
        data[i] = i*2;
    }
    
    /* But also as a pointer */
    pointerToData = data;
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", *(pointerToData+i));
    }
    return 0;
}
```


#### Suggested exercises:

- C.06.01. Ask the user for six integer numbers, store them in an array and display them reversed.

- C.06.02. Ask the user for seven integer numbers, store them in an array and calculate and display their average.

- C.06.03. Ask the user for eight integer numbers and store them in an array. Then ask the user for another number and answer if that number was part of the starting eight.

- C.06.04. Ask the user for six integer numbers, store them in an array and display the maximum of those data.
