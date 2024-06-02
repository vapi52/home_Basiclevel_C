#include <stdio.h>

int main()
{
    int i,n;
    FILE *f_in;
    FILE *f_out;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    f_in = fopen(in_filename, "r");
    f_out = fopen(out_filename, "w");
    fscanf(f_in, "%d", &n);
    char str_ch[n + 2];
    char capital_letter = 'A';
    char even_digit = '2';
    for (i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            str_ch[i] = capital_letter++;
        else
        {
            str_ch[i] = even_digit;
            if (even_digit == '8')
                even_digit = '2';
            else
                even_digit += 2;
        }
    }

    str_ch[i] = '\0';
    fprintf(f_out, "%s", str_ch);
    fclose(f_in);
    fclose(f_out);
    return 0;
}
