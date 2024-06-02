#include <stdio.h>

#define STR_LENGTH 100

int main(void)
{
    FILE *f_in;
    FILE *f_out;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    f_in = fopen(in_filename, "r");
    f_out = fopen(out_filename, "w");
    char name[STR_LENGTH] = {'\0'};
    char surname[STR_LENGTH] = {'\0'};

    fscanf(f_in, "%s%s", surname, name);
    fclose(f_in);

    fprintf(f_out, "Hello, %s %s!", name, surname);
    fclose(f_out);
    return 0;
}
