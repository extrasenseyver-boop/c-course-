#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *in;
    FILE *out;
    char arr_c[102];


    in = fopen("input.txt", "r");

    if (fgets (arr_c, 102, in) != NULL)
    {
        if (arr_c[strlen(arr_c) - 1] == '\n')
        {
            arr_c[strlen(arr_c) - 1] = '\0';
        }
        size_t count = strlen(arr_c);
        out = fopen("output.txt", "w");
        fprintf(out, "%s, ", arr_c);
        fprintf(out, "%s, ", arr_c);
        fprintf(out, "%s %zu", arr_c, count);
        fclose(in);
        fclose(out);
    }


    return 0;
}

