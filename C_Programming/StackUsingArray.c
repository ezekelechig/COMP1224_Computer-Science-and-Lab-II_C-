// ARRAY-BASED IMPLEMENTATION OF STACK
//Stack of Integers

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 51
int A[MAX_SIZE];
int top = -1;
void Push(int x);
void Pop();
int Top();
int IsEmpty();
void Print();
int main()
{
    Push(4);Print();
    Push(10);Print();
    Pop();Print();
    Pop();Print();
    IsEmpty();Print();
    Pop();Print();
    return 0;
}
void Push(int x)
{
    if(top == MAX_SIZE - 1)
    {printf("Error: Stack Overflow!\n");return;
    }
    A[++top] = x;
}
void Pop()
{
    if(top == -1)
    printf("Error: Stack is Empty\n");
    top--;
}
int Top()
{
    return A[top];

}
int IsEmpty()
{
    if(top== -1)
        return 1;
    else
        return 0;
}
void Print()
{
    int i;
    printf("Stack: ");
    for(i = 0; i<=top; i++)
        printf("%d=", A[i]);
    printf("\n");
}




