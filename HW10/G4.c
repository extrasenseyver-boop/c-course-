#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *in;
    FILE *out;

    char word_1[101];
    char word_2[101];

    in = fopen("input.txt", "r");

    fscanf(in, "%100s %100s", word_1, word_2);

    out = fopen("output.txt", "w");

    for (int i = 'a'; i <= 'z'; i++)
    {
        int count_1 = 0;
        int count_2 = 0;

        for (int j1 = 0; j1 < strlen(word_1); j1++)
        {

            if (word_1[j1] == i)
            {
                count_1 += 1;
            }

        }

        for (int j2 = 0; j2 < strlen(word_2); j2++)
        {

            if (word_2[j2] == i)
            {
                count_2 += 1;
            }

        }
        if (count_1 == 1 && count_2 == 1)
        {
            fprintf(out, "%c ", i);
        }

    }
    fclose(in);
    fclose(out);

    return 0;
}

