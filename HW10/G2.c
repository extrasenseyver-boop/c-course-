#include <stdio.h>

int main(void)
{
    FILE *in;
    FILE *out;

    int number;
    char c = 65;
    int num = 2;

    in = fopen("input.txt", "r");
    fscanf(in, "%d", &number);

    if (number <= 26)
    {
        out = fopen("output.txt", "w");
        for (int i = 1; i <= number; i++)
        {
            if (i % 2 != 0)
            {
                fprintf(out, "%c", c);
                //~ printf("%c", c);
                c++;
            }
            else if (i % 2 == 0)
            {
                if (num <= 8)
                {
                    fprintf(out, "%d", num);
                    //~ printf("%d", num);
                    num += 2;
                }
                else if (num > 8)
                {
                    num = 2;
                    fprintf(out, "%d", num);
                    num += 2;
                }

            }

        }
        fclose(in);
        fclose(out);
    }

    return 0;
}

