#include <stdio.h>
#include <string.h>

const int strch_size = 1000;

int is_palindrome(char strch[]);

int main(void)
{
char strch[strch_size];
    FILE *f_in;
    FILE *f_out;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    f_in = fopen(in_filename, "r");
    fscanf(f_in, "%[^\n]",strch);
    fclose(f_in);
    f_out = fopen(out_filename, "w");
    if (is_palindrome(strch))
        fprintf(f_out, "%s","YES");
    else
        fprintf(f_out, "%s","NO");
    fclose(f_out);
    return 0;
}

int is_palindrome(char line[])
{
int len = strlen(line);
    for (int i = 0; i < len / 2; i++)
        if (line[i] != line[len - i - 1])
            return 0;
    return 1;
}
