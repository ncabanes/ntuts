/* 
 * Common bugs 03 
 * Easy: a blank after each number...
 *     or maybe not...
 */

#include <stdio.h>

int main()
{
	int i;

    for (i = 0; i < 10; i++)
        printf("%d", i);
        printf(" ");

    return 0;
}
