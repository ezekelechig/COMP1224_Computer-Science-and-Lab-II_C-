#include<stdio.h>
#include<stdlib.h>

/*int main()
{
    int n, i, a=0, b = 1, c;
    printf("Enter the number of terms you want to print:");
    scanf("%d", &n);

printf("Fibonacci Sequence is :\n");
    for(i = 0; i<=n; i++)
    {
       printf("%d\t", a);

       c = a+b;
       a=b;
       b=c;
    }
    printf("\n");

    return 0;

}*/

void fib(int n);

int main()
{
    printf("%d",fib(8));
    return 0;
}

void fib(int n)
{
    while(n>=0)
    {
        if(n == 0)
    {
        printf("%d",n);
    }

    else if(n ==1)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",(fib(n-2)+fib(n-1));
    }
    }

}
