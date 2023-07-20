#include<stdio.h>

int main()
{
    int rectangle(int,int);
    int area = rectangle(23,21);
    printf("The area is : %d",area);
    return 0;
}
int rectangle(int a,int b){
    
    return a*b;
}
 