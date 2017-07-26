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

