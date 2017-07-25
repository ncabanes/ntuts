# Intro to C for programmers

## 7. Contact with strings

In C, a "string" is just an array of chars. The predefined functions expect
these strings to be null-terminated (the last char must be a null character, \0),
as in this example:

```c
#include <string.h>
int main()
{
    char *text = "Hello";
    int pos = 0;
    while(text[pos])
    {
        printf("%c ", text[pos++]);
    }
    return 0;
}
```

If we need to store a different value, we must make sure that the array is big
enough to hold it. If it wasn't, we can allocate as much memory as need, using
"malloc". To assign a new value, we must use "strcpy":

```c
char *text = "Hello";
text = (char *) malloc (40 * sizeof(char));
strcpy(text, "This is a longer message");
```

We can know the length of a string using "stlren", and we can display the 
contents of a string using "printf", "puts" or one letter a time:

```c
printf("%s\n", text);
puts(text);
for (pos = 0; pos < strlen(text); pos++)
    printf("%c ", text[pos]);
}
```

A more detailed example:

```
/* Contact with strings */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /* When defined, a string can be assigned a value */
    char *text = "Hello";
    /* The format for strings in "printf" is "%s" */
    printf("%s\n", text);
    
    /* If we need more space, we must ask for it */
    text = (char *) malloc (40 * sizeof(char));
    /* And we can't use "=" to assign the new value, but strcpy: */
    strcpy(text, "This is a longer message");
    /* And we can use "puts" to display a string in a simpler way */
    puts(text);
    
    /* Strings are null-terminated, so we can also use "while"
       to traverse them: */
    int pos = 0;
    while(text[pos])
        printf("%c ", text[pos++]);
    printf("\n");
    
    /* A "more natural" alternative:"for" and "strlen" */
    for (pos = 0; pos < strlen(text); pos++)
        printf("%c ", text[pos]);
    printf("\n");
    
    return 0;
}
```

#### Suggested exercises:

- C.07.01. Create a string containing the text "How are you?". Display this text, separating each pair of characters with an extra blank space.

- C.07.02. Create a string containing the text "Welcome to C". Display this text, reversed (from the last character to the first one).
