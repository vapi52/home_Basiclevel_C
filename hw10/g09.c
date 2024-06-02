#include <stdio.h>

#define STR_LENGTH 1000

int str_input(FILE *f_in,char str[]);

int main(void)
{
    FILE *f_in;
    FILE *f_out;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    f_in = fopen(in_filename, "r");
    f_out = fopen(out_filename, "w");
    char str[STR_LENGTH];
    int str_len = 0,count = 0;
    str_len = str_input(f_in, str);
    for(int i = 0; i < str_len;i++)
    {
        for(int j = i; j >= 0; j--)
        {
            if(str[j] == str[i])
                count++;
        }

        if(count == 1  && str[i] != ' ')
            fwrite(str + i, sizeof(char), 1, f_out);
        count = 0;
    }
    fclose(f_in);
    fclose(f_out);
    return 0;
}

int str_input(FILE *f_in,char str[])
{
    int i = 0;
    char ch = 0;
    while((ch = fgetc(f_in)) != EOF)
    {
        if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <='z'))
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
