/* c09: Reading both numbers and strings can mean trouble... */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int times;
    int i;
    char eol;
    
    printf("How many greetings? ");
    scanf("%d", &times);
    
    /* The End Of Line remains in the buffer of the keyboard,
       so we must skip it or we would read an empty string */
    scanf("%c", &eol);
    
    /* And now we can go on... 
       We should not use "gets(name);", as "gets" is deprecated:
       it might lead to buffer overflow */
    printf("And your name is... ");
    fgets(name, 99, stdin);
    /* But fgets keeps the \n when reading... */
    name[ strlen(name)-1 ] = '\0';
    
    for (i = 0; i < times; i++)
    {
        printf("Hello %s! ", name);
    }  
    return 0;
}
