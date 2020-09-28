#include <stdio.h>
#include <ctype.h>

int main()
{
    int actor;

    do
    {
        actor = getchar();
        if(isupper(actor))
            putchar(actor);

    }

    while( actor != '\n');

    return 0;
}
