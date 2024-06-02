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
    char last_ch = 0;
    int last_num = 0;
    fscanf(f_in, "%[a-zA-Z0-9 ]s", str_ch);
    fclose(f_in);
    for(int i = 0; i < STR_LENGTH && str_ch[i] != '\0'; i++)
     {
      last_ch = str_ch[i];
      last_num = i;
     }

    for(int i = 0; i < last_num; i++)
    {
     if(str_ch[i] == last_ch)
      {
       fprintf(f_out,"%d ",i);
      }
    }
    fclose(f_out);
    return 0;
}
