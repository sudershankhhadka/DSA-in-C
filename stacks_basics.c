//
// Created by zion on 6/9/23.
//
//More definitive way of implementing stack


//Implementing stacks using arrays



#include<stdio.h>
#include <stdbool.h>
#define MAXSIZE 8

int stack[8];
int top = -1;

//to check if the stack is empty
bool isempty(){
    if (top == -1)
        return true;
    else
        return false;
}

//to check is the stack is full

bool isfull(){
    if(top == MAXSIZE)
        return true;
    else
        return false;
    }


//to push data

void push(int data){
    if(!isfull()){
        top+=1;
        stack[top] = data;
    }
    else{
        printf("Overflow");
    }
}


//to pop data
int pop(){
    if(!isempty()){
        int data = stack[top];
        top -= 1;
        return data;
    }
    else{
        printf("Underflow Condition");
        return  -1;
    }
}

//to peek data from  the stack

int peek(){
    return stack[top];
}

int main(){
    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", peek());

    while (!isempty()){
        printf("Popped element: %d\n", pop());
    }

    printf("Top element: %d\n", peek());

    return 0;
}