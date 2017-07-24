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
