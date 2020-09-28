#include <stdio.h>
#include <string.h>


int main()
{
    int A[10] = {[9]=1000};

    for(int i = 0; i< 10; i++)
    {
        printf("%d\t\n", A[i]);
    }

    return 0;
}

