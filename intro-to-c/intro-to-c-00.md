# Intro to C for programmers

## 0. The enviroment and the basics

This is an intro to the C programming language for programmers who have used previously other (more modern) programming languages.

In this preliminar section, we'll see the appearance of a simple C program and how to use it.

```c
#include <stdio.h>

int main()
{
    printf("Hello, world!");
    return 0;
}
```

There are a few things to comment on this file:

 - The body of a C program is called "main". The standard way to use it is starting the body program with "int main() {" and ending it with "return 0; }".
 - "printf" is used to display a text on screen. The text must be specified between parenthesis and quotation marks. You must add the line "#include <stdio.h>" at the beginning of the program if you are going to use "printf"("stdio" is an abbreviation for "standard input/output").
 - Spaces and line breaks are not important, so the program might have been written (for example) this way:

```c
#include <stdio.h>
int main() { printf("Hello, world!"); return 0; }
```


¿And how can you **test** it? The recommended way is using Linux + Geany, wheter in a "real" machine or a virtual machine. Most Linux versions include a C compiler preinstalled, and you can easily install an editor named "Geany", from which you can compile a program and run it just clicking a button.

Try it!
