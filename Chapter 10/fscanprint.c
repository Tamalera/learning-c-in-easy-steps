#include <stdio.h>

int main()
{
    FILE *nums_ptr, *hint_ptr;
    int nums[20], i, j;
    nums_ptr = fopen("nums.txt", "r");
    hint_ptr = fopen("hint.txt", "w");

    if (nums_ptr != NULL && hint_ptr != NULL)
    {
        for (i = 0; !feof(nums_ptr); i++)
        {
            fscanf(nums_ptr, "%d", &nums[i]);
        }
        fprintf(stdout, "\nTotal number found:%d\n", i);
        for (j = 0; j < i; j++)
        {
            fprintf(stdout, "%d", nums[j]);
        }
        fprintf(hint_ptr, "fscanf and fprintf are flexible\n");
        for (j = 0; j < i; j++)
        {
            fprintf(hint_ptr, "%d", nums[j]);
        }

        fclose(nums_ptr);
        fclose(hint_ptr);

        return 0;
    }
    else
    {
        if (nums_ptr == NULL)
        {
            printf("Unable to open original.txt\n");
        }
        if (hint_ptr == NULL)
        {
            printf("Unable to open copy.txt\n");
        }
        return 1;
    }
}