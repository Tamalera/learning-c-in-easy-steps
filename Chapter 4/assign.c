#include <stdio.h>

int main()
{
    int a, b;
    printf("Assigned: \n");
    printf("\tVariable a = %d \n", a = 8);
    printf("\tVariable b = %d \n", b = 4);
    printf("Added and assigned\n");
    printf("\tVariable a+=b (8+=4) %d \n", a += b);
    printf("Subtracted and assigned\n");
    printf("\tVariable a-=b (12-=4) %d \n", a -= b);
    printf("Multiplied and assigned\n");
    printf("\tVariable a*=b (8*=4) %d \n", a *= b);
    printf("Divided and assigned\n");
    printf("\tVariable a/=b (32/=4) %d \n", a /= b);
    printf("Modulated and assigned\n");
    printf("\tVariable a%%=b (8%%=4) %d \n", a %= b);

    return 0;
}