#include<stdio.h>
void even(int*,int*);
int main(){
    int a = 10,b=20;
    int c=89;
    int d=87;
    printf("a=%d,b=%d",a,b);
    even(&c,&d);
}
void even(int *c,int *d){
   
    printf("c=%d,d=%d",*c,*d);
}