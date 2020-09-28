#include <stdio.h>

int  main()
{
  int num;

    printf("Enter Number to check if even or odd:\n" );

    scanf("%d", &num);

    if(num % 2 == 0)

        printf("%d\t is even\n",num);

    else
        printf("%d\t is odd\n", num);

    return 0;


}




