#include <stdio.h>

const int line_width = 101;

int main(void)
{
    char line[line_width];
    signed char c;
    FILE *f_in;
    FILE *f_out;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    f_in = fopen(in_filename, "r");
    if(f_in == NULL)
    {
        printf("Occured error during the opening input file!");
        return 1;
    }
    int cnt = 0;
    while(((c = fgetc(f_in)) != EOF) && (c != '\n'))
        line[cnt++] = c;
    line[cnt] = '\0';
    fclose(f_in);
    f_out = fopen(out_filename, "w");
    if(f_out  == NULL)
    {
        printf("Occured error during the opening output file!");
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        if (i)
            fprintf(f_out, ", ");
        fprintf(f_out, "%s", line);
    }
    fprintf(f_out, " %d", cnt);
    fclose(f_out);
    return 0;
}
