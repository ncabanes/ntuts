/* First example of functions */

#include <stdio.h>

float sum (float n1, float n2)
{
    return n1+n2;
}

int main()
{
	float f1 = sum(3, 7);
	printf("The sum of 3 and 7 is %f", f1);
    printf("The sum of 4.5 and 6 is %f", sum(4.5, 6));
    return 0;
}

