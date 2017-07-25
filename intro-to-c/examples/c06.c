/* Arrays and pointers */

#include <stdio.h>

#define MAX 5

int main()
{
    int data[MAX];
    int *pointerToData;
    int i;
    
    /* An array can be accessed as an array, of course... */
    for (i = 0; i < MAX; i++)
    {
        data[i] = i*2;
    }
    
    /* But also as a pointer */
    pointerToData = data;
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", *(pointerToData+i));
    }
    return 0;
}
