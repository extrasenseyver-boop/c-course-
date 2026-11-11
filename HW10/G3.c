#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *in;
    FILE *out;

    char arr_c[1002];

    in = fopen("input.txt", "r");

    if (fgets (arr_c, 1002, in) != NULL)
    {
        if (arr_c[strlen(arr_c) - 1] == '\n')
        {
            arr_c[strlen(arr_c) - 1] = '\0';
        }

        char last_c = arr_c[strlen(arr_c) - 1];

        out = fopen("output.txt", "w");

        for (int i = 0; i < strlen(arr_c) - 1; i++)
        {
            if (arr_c[i] == last_c)
            {
                fprintf(out, "%d ", i);
            }

        }
        fclose(in);
        fclose(out);
    }

    return 0;
}

