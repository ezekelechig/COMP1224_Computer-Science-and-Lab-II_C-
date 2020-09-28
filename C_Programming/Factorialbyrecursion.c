//func(n)
//if  n <= 1, return 0, else return n*func(n-1)

#include <stdio.h>
#include <stdlib.h>

/*int fac_func(int n);
int main()
{
    int n; unsigned long long result;
    printf("Enter Number to compute factorial:\n");
    scanf("%d",&n);
    result = fac_func(n);
    printf("%d! is:\n",n);
    printf("%llu\n", result);
    return 0;
}

int fac_func(int n)
{
    if(n<0)
        printf("Error!\n");
    else if(n==1 || n == 0)
        return 1;
    else
        return n*fac_func(n-1);

}*/

int fac_func(int n); //Function prototype
int main()
{
    int n; unsigned long long result;

    printf("Enter Number to compute factorial:\n");
    scanf("%d",&n);

    if(n<0)
        printf("Error!\n");
    else if(n==0 || n==1)
        {
            result = 1;
            printf("%d! is %llu\n", n, result);
    }
    else
    {
        result = fac_func(n); //function call
        printf("%d! is:\n",n);
        printf("%llu\n", result);
    }

    return 0;
}

int fac_func(int n)
{
    int i;
    int factorial = 1;

    for(i=2; i<=n; i++)
        factorial *= i;

    return factorial;

}
