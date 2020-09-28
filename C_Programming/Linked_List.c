/* INSERTING AND PRINTING ITEM AT THE BEGINNING OF A LINKED LIST*/
#include<stdio.h>
#include<stdlib.h>

struct Node
    {
        int data;
        struct Node* next;
    };

struct Node*root;
void Insert(int j);
void Print();

int main()
{
    root = NULL;
    printf("How many items do you want to insert and print?\n");
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter Item to insert and print: \n");
        scanf("%d",&j);
        Insert(j);
        Print();
    }

    //return 0;

}

void Insert(int j)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = j;
    temp->next = root;
    root = temp;
}
void Print()
{
    struct Node* temp = root;
    printf("Items on the list are: ");
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
