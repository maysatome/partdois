
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // https://pt.wikipedia.org/wiki/ASCII
    
    int i;

    for(i = 0; i<=127; i++)
    {
        printf ("%d %X %c \n",i, i, i);
    }

    return 0;
}
