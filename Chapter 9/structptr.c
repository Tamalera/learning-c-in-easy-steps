#include <stdio.h>

typedef struct
{
    char *name;
    char *popn;
} City;

int main()
{
    City ny, la, ch, *ptr;
    ny.name = "New York City";
    ny.popn = "8300000";
    printf("\n%s, Population: %s\n", ny.name, ny.popn);

    ptr = &la;
    ptr->name = "Los Angeles";
    ptr->popn = "3800000";
    printf("\n%s, Population: %s\n", la.name, la.popn);

    ptr = &ch;
    ptr->name = "Chicago";
    ptr->popn = "2800000";
    printf("\n%s, Population: %s\n", ch.name, ch.popn);

    return 0;
}
