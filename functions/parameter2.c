#include <stdio.h>
void func(int, int);
void main()
{
    int x = 7, y = 6;
    func(10, 8);
    printf("\nBefore the function calling:\n");
    printf("x=%d y=%d\n", x, y);
}
void func(int x, int y)
{
    x = 9, y = 10;
    printf("After the function calling \n");
    printf("x= %d y= %d", x, y);
}