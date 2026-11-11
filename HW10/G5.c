#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *in;
    FILE *out;

    char str[1002];

    in = fopen("input.txt", "r");

    if (fgets (str, 1002, in) != NULL)
    {
        if (str[strlen(str) - 1] == '\n')
        {
            str[strlen(str) - 1] = '\0';
        }

    }
    out = fopen("output.txt", "w");

    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
            case 'a' : fprintf(out, "%c", 'b'); break;
            case 'b' : fprintf(out, "%c", 'a'); break;
            case 'A' : fprintf(out, "%c", 'B'); break;
            case 'B' : fprintf(out, "%c", 'A'); break;
            default : fprintf(out, "%c", str[i]);
        }

    }
    fclose(in);
    fclose(out);

        //~ if (str[i] == 'a')
        //~ {
            //~ fpintf(out, "%c", 'b');
        //~ }
        //~ else if (str[i] == 'b')
        //~ {
            //~ fpintf(out, "%c", 'a');
        //~ }


    return 0;
}

