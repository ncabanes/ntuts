/* Conditions */

#include <stdio.h>

int main()
{
    int x = 5, y = 6;
    if (x >= 0)
        printf("x is positive or zero\n");
    else
        printf("x is negative\n");
        
    int greatest = x > y ? x : y;
    
    switch(x)
    {
        case 5: printf("x is five\n"); break;
        case 6: printf("x is six\n"); break;
        default: printf("x is not five nor six\n"); break;
    }

    return 0;
}
