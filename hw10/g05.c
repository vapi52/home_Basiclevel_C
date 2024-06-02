#include <stdio.h>

#define STR_LENGTH 1000

int main(void)
{
    FILE *f_in;
    FILE *f_out;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    f_in = fopen(in_filename, "r");
    f_out = fopen(out_filename, "w");
    char str_ch[STR_LENGTH] = {'\0'};

    fscanf(f_in, "%[a-zA-Z0-9 ]s", str_ch);
    fclose(f_in);

    for(int i = 0; i < STR_LENGTH && str_ch[i] != '\0'; i++)
    {
        switch(str_ch[i])
        {
            case 'a':
             str_ch[i] = 'b';
             break;
            case 'b':
             str_ch[i] = 'a';
             break;
            case 'A':
             str_ch[i] = 'B';
             break;
            case 'B':
             str_ch[i] = 'A';
             break;
        }
    }
    fprintf(f_out, "%s", str_ch);
    fclose(f_out);
    return 0;
}
