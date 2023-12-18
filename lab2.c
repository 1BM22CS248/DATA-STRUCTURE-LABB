#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=1;
void push()
{
    if(top==N)
        printf("stack overflow");
    else
    {
        int item;
        printf("Enter the item to be inserted");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }

}
void pop()
{
    if(top<0)
        printf("stack undeflow");
    else
    {
        printf("topmost element will be deleted");
        top--;
    }
}
void display()
{
    printf("the new stack is:");
    for(int i=N;i>=0;i--)
        printf("%d",stack[i]);
}
void main()
{
    int choice;
    while(1)
    {
        printf("enter 1.push 2.pop 3.display 4.exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push(); break;
            case 2:pop(); break;
            case 3:display(); break;
            case 4:exit(0);
        }
    }
}
