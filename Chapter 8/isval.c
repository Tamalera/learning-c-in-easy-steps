#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[7];
    int i;
    int flag = 1;

    puts("Enter six digits without any spaces...");
    gets(str);
    for (i = 0; i < 6; i++)
    {
        if (!isdigit(str[i]))
        {
            flag = 0;
            if (isalpha(str[i]))
            {
                printf("Letter %c found\n", toupper(str[i]));
            }
            else if (ispunct(str[i]))
            {
                printf("Punctuation found\n");
            }
            else if (isspace(str[i]))
            {
                printf("Space found\n");
            }
        }
    }

    (flag) ? puts("Entry valid") : puts("Entry Invalid");
    return 0;
}