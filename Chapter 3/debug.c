#include <stdio.h>

#define DEBUG 1 /* Change to 2 or 3 and recompile to see changes. Or undef to have the undefined case below */
/* #undef DEBUG */
int main()
{
#if DEBUG == 1
    printf("Debug status is 1 \n");
#elif DEBUG == 2
    printf("Debug status is 2 \n");
#else
#ifdef DEBUG
    printf("Debug is defined\n");
#endif
#ifndef DEBUG
    printf("DEbug is not defined!\n");
#endif
#endif

    return 0;
}