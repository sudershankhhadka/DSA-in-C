#include<stdio.h>
void refer(int*,int*);
void main(){
    int x = 5;
    int y =10;
    refer(&x,&y);
    
}
void refer(int* x,int* y){
printf("x=%d,y=%d",*x,*y);
}