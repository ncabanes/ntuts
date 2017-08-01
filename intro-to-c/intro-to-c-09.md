# Intro to C for programmers

## 9. Problems with the console input

We can use *scanf("%d",...)* to read integer numbers from the console. If we 
use "%f", we can read real numbers. Problems start when we read chars with
"%c" or strings with "%s":

- On one side, when we read a string with "%s", it will be read only until the
  first space, and the rest of the string (if it exists) will remain in the
  buffer until the next read. 

- On the other side, when we read a char or a number, the user will press Return
  to confirm the entry. In that moment, the character which corresponds to the Return key will
  still remain in the keyboard buffer. Such character is skipped when we read
  a number, but not when we read a string (which will be interpreted as an
  empty string).

There are solutions for both problems:

- If we want to read a string which may contains spaces, we can use "gets" 
  (available only in old versions of C, as it can be unsafe, because of the
  risk of buffer overflow) or, preferible, "fgets", which requires a maximum
  size:

```c
char name[100];
/* Old style, not recommended */
gets(name);
/* Currently recommended way */
fgets(name, 99, stdin);
```

- If we have read a number and then we want to read a string, we can empty the
  keyboard buffer, either reading the "carriage return" symbol or flushing the
  buffer:

```c
/* Reading the "carriage return" character */
char eol;
scanf("%c", &eol);
/* Flushing the buffer contents */
fflush(stdin);
```

So a complete example might look like this:

```c
/* c09: Reading both numbers and strings can mean trouble... */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int times;
    int i;
    char eol;
    
    printf("How many greetings? ");
    scanf("%d", &times);
    
    /* The End Of Line remains in the buffer of the keyboard,
       so we must skip it or we would read an empty string */
    scanf("%c", &eol);
    
    /* And now we can go on... 
       We should not use "gets(name);", as "gets" is deprecated:
       it might lead to buffer overflow */
    printf("And your name is... ");
    fgets(name, 99, stdin);
    /* But fgets keeps the \n when reading... */
    name[ strlen(name)-1 ] = '\0';
    
    for (i = 0; i < times; i++)
    {
        printf("Hello %s! ", name);
    }  
    return 0;
}
```


#### Suggested exercises:

- C.09.01. Ask the user for an integer number "n" and a string "t", and display the first "n" letters of "t" (or perhaps less, if "t" is shorter).

- C.09.02. Ask the user for an integer number "width", another integer number "heoght" and a string "t", and display a rectangle of that width and height repeatring that string. For example, if the string is "Nacho", the width is 3 and the height is 4, the result would be:

```txt
NachoNachoNacho
Nacho     Nacho
Nacho     Nacho
NachoNachoNacho
```
