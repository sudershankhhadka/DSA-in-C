//Simple stack implementation

#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int top = -1;
int stack[SIZE];
void push();
void pop();
void peek();

int main()
{
    int choice;
    while (1)
    {
        printf("\nPerform operation on the stack");
        printf("\nEnter the choice: \n");
        printf("1.Push \n2.Pop \n3.Peek \n4.End\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid Choice!!!");
        }
    }
}



//for the push operation

void push()
{
    int x;
    if(top == SIZE-1){
        printf("Overflow");
    }
    else{
        printf("Enter the element to be added in the stack");
        scanf("%d",&x);
        top+=1;
        stack[top] = x;
    }
}

//for the pop operation

void pop()
{


    if(top < 0 ){
        printf("Underflow!!!");

    }
    else{
        printf("Popped Element: %d",stack[top]);
        top-=1;
    }
}


//for the peek operation

void peek()
{
    if(top == -1)
    {
        printf("\nUnderflow!!");
    }
    else{
        for(int i = top;i>=0;--i)
            printf("%d\n",stack[i]);
    }
}