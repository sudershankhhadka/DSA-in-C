
#include <stdio.h>
void negative(int arr[])
{
    int c = 0;

    for (int i=0; i < 6; i++)
    {
        if (arr[i] < 0)
        {
            c++;
        }
    }
    printf("%d", c);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, -7};
    // int size = sizeof(arr)/sizeof(arr[0]);
    negative(arr);
}