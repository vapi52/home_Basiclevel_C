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
    fclose(f_in);
    //printf("%s\n", str);
    for(int i = 0; i < str_len;)
    {
        while(i < str_len && str[i++] != ' ');
        if(i < str_len && str[i - 2] == 'a')
            count++;
        else if(i == str_len && str[i-1] == 'a')
            count++;
    }
    fprintf(f_out, "%d", count);
    fclose(f_out);
    return 0;
}

int str_input(FILE *f_in,char str[])
{
    int i = 0;
    char ch = 0;
    while((ch = fgetc(f_in)) != EOF)
    {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch == ' '))
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
