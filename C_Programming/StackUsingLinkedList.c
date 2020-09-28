#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* top = NULL;
void Push(int x);
void Pop();
void Print();
int main()
{
    Push(2);Print();        //STACK IMPLEMENTAION USING LISNKED LIST
    Push(3);Print();
    Push(10);Print();
    Pop();Print();
    Pop();Print();
    return 0;
}
void Push(int x)
{
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = top;
    top = temp;
}
void Pop()
{
    struct Node* temp;
    if(top==NULL) return;
    temp = top;
    top = temp->next;
    temp->next = NULL;
    free(temp);
}
void Print()
{
    struct Node* temp;
    temp = top;
    if(top==NULL){
        printf("Stack is Empty!\n"); return;}
    printf("Stack:");
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
