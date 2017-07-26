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

