/* Contact with strings */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /* When defined, a string can be assigned a value */
    char *text = "Hello";
    /* The format for strings in "printf" is "%s" */
    printf("%s\n", text);
    
    /* If we need more space, we must ask for it */
    text = (char *) malloc (40 * sizeof(char));
    /* And we can't use "=" to assign the new value, but strcpy: */
    strcpy(text, "This is a longer message");
    /* And we can use "puts" to display a string in a simpler way */
    puts(text);
    
    /* Strings are null-terminated, so we can also use "while"
       to traverse them: */
    int pos = 0;
    while(text[pos])
        printf("%c ", text[pos++]);
    printf("\n");
    
    /* A "more natural" alternative:"for" and "strlen" */
    for (pos = 0; pos < strlen(text); pos++)
        printf("%c ", text[pos]);
    printf("\n");
    
    return 0;
}
