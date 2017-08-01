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

