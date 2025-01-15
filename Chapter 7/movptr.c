#include <stdio.h>

int main()
{
    int i;
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = nums;
    printf("\nAddress: %p is value: %d\n", ptr, *ptr);

    ptr++;
    printf("\nAddress: %p is value: %d\n", ptr, *ptr);
    ptr++;
    printf("\nAddress: %p is value: %d\n", ptr, *ptr);
    ptr -= 2;
    printf("\nAddress: %p is value: %d\n", ptr, *ptr);

    for (i = 0; i < 10; i++)
    {
        printf("\Element: %d contains value: %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}