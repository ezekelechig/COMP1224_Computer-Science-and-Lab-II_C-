#include <stdio.h>
#include <stdlib.h>
#define MAX 20
/*struct stack
{
    char data[MAX];
    int top;
};
struct stack* s;
char Pop();
void Push( char x);    //REVERSING A STRING USING STACK IN C
void Print();
void init();
int main()
{

    char name[MAX];
    int i = 0;
    char x = 'a';
    init();

    printf("Enter string to reverse: ");
    gets(name);

    while(name[i] != '\0')
    {
        x = name[i];
        Push(x);
        i++;
    }
    puts("String in stack: ");
    Print();

     i = 0;
    while(s->top >= 0)
    {
       name[i] = Pop();
       i++;
    }

    puts("\nThe reversed string is:");
    puts(name);
    //return 0;
}
void init()
{
    s = (struct stack*)malloc(sizeof(struct stack));
    s->top = -1;
}
void Push(char x)
{

    if(s->top == MAX-1)
    {
        printf("Error: Stack Overlow!");

    }
    else
    {
        s->top++;
        s->data[s->top] = x;
    }

}
char Pop()
{
    char x;
    if(s->top == -1)
    {
        printf("\n Stack is already Empty");
        return '\0';
    }
    else
    {
        x = s->data[s->top];
        s->top--;
        return x;
    }
}
void Print()
{
    int i;
    for(i=0; i <= s->top; i++)
    {
        printf("%c\t", s->data[i]);
    }
}*/
//LE
//void len(char S[]);
/*void print_reverse(char S[]);
int main()
{

    char A[30];
    printf("Enter the string to find length: ");
    gets(A);
    //puts(A);
    print_reverse(A);//REVERSE A STRING WITH CHAR ARRAYS AND POINTERS
    return 0;
}

void print_reverse(char S[])
{
  int i= 0;
  int len = 0;
  while(S[i] != '\0')
  {
      len++; i++;
  }
while(len>=0)
{
    printf("%c",S[len]);
    len--;
}
printf("\n");

}*/



