#include <stdio.h>
void sum();
int main()
{
   
    sum();
   
}
void sum()
{
    int a, b;
    printf("Enter the 2 numbers: \t");
    scanf("%d%d", &a, &b);
    int c = a + b;
   if(c<5){
    printf("%d",c);

   }
   else{
    printf(" \n This number is greater than 5");
   }
}