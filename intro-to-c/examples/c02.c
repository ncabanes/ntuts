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
    (notation introduced in C99) and the variable "i"
    must be declared before the loop
    */

    return 0;
}
