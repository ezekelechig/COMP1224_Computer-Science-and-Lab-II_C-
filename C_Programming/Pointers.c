#include <stdio.h>

void Double( int *A, int size)
{
    int i, y = 0;
     int* p = A;

    while(y<10)
    {
        *p = *p*2;
       printf("%d\t",*p) ;
        p++;
        y++;
    }
    printf("\n");
    //printf("Sum of Array A = %d \n", sum);
}
int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    //int* p = A
    int size = sizeof(A)/sizeof(A[0]);
    Double(A, size);

    for(int x = 0; x<size; x++)
    {
        printf("%d\t", A[x]);
    }

    printf("\n");

    printf("\n");

    return 0;

}
