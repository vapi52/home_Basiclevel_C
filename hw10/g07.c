#include <stdio.h>

int main(void)
{
    FILE *f_in;
    FILE *f_out;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    f_in = fopen(in_filename, "r");
    f_out = fopen(out_filename, "w");
    char ch = 0;
    int cnt_uppercase = 0;
    int cnt_lowercase = 0;
    while((ch = fgetc(f_in)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
            cnt_lowercase++;
        else if(ch >= 'A' && ch <= 'Z')
            cnt_uppercase++;
    }
    fclose(f_in);
    fprintf(f_out, "%d %d", cnt_lowercase, cnt_uppercase);
    fclose(f_out);
    return 0;
}
