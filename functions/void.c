#include <stdio.h>
void sum()
{
    int a, b, c;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("The sum is :%d \n", c);
}
int main()
{

    for (int i = 1; i <= 3; i++)
    {
        sum();
    }
}