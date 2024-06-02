#include <stdio.h>

#define STR_LENGTH 1000

void fput_int(int n, FILE *f_out);
void sort_array(int arr[], int len);
void get_numbers(FILE *f_in, FILE *f_out);

int main(void)
{
    FILE *f_in;
    FILE *f_out;
    char in_filename[] = "input.txt";
    char out_filename[] = "output.txt";
    f_in = fopen(in_filename, "r");
    f_out = fopen(out_filename, "w");
    if(f_in == NULL)
    {
        printf("Occured error during the opening input file!");
        return 1;
    }
    if(f_out  == NULL)
    {
        printf("Occured error during the opening output file!");
        return 1;
    }
    get_numbers(f_in, f_out);
    fclose(f_in);
    fclose(f_out);
    return 0;
}

void fput_int(int n, FILE *f_out)
{
  char str[STR_LENGTH / 10 + 1];
  sprintf(str, "%u", n);
  fputs(str, f_out);
}

void sort_array(int arr[], int len)
{
  for (int j = 0; j < len - 1; j++)
  {
    for (int i = 0; i < len - 1; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
      }
    }
  }
}

void get_numbers(FILE *f_in, FILE *f_out)
{
  char ch;
  int numbers[STR_LENGTH];
  int numbers_cnt = 0;
  while ((ch = fgetc(f_in)) != EOF && ch != '\n')
  {
    if ('0' <= ch && ch <= '9')
    {
      int num = ch - '0';
      while ((ch = fgetc(f_in)) >= '0' && ch <= '9')
      {
        num = num * 10 + ch - '0';
      }
      numbers[numbers_cnt++] = num;
    }
  }
  sort_array(numbers, numbers_cnt);
  for (int i = 0; i < numbers_cnt; i++)
  {
    fput_int(numbers[i], f_out);
    fputc(' ', f_out);
  }
}
