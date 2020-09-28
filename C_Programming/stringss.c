#include <stdio.h>
#include <string.h>

/*int main()
{
    char string[] = "My name is Prince";
    int len;

    len = strlen(string);

    printf("The following string:\n");

    puts(string);

    printf("is %d characters long. \n", len);

    return 0;

    int main()
    {
        char input[64];

        int len;

        printf("Instructions: ");

        fgets(input, 64, stdin);

        len = strlen(input);

        printf("You typed %d characters of instruction. \n", len);

        return 0;


    }
}*/
#define ROW 20
#define COL 10
int main()
{
    int row, col;
    //srand((unsigned) time(NULL));

    for(row = 1; row<=ROW; row++)
    {
        for(col = 1; col <= COL; col++)
            printf("%2d\t", rand() % 100);
        printf("\n");
    }
return 0;
}
