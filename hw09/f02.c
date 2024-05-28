#include <stdio.h>

#define DATA_SIZE 20

int Input_ch(int arr[], int n);
void sort_even_odd( int n, int arr[]);
void Print(int arr[], int len);



int main(void)
{
    int data[DATA_SIZE] ;
    int size = Input_ch(data,DATA_SIZE);
    sort_even_odd(size,data);
    Print(data,size);
  return 0;
}


int Input_ch(int arr[], int n)
{
char c;
int num = 0;
int len = 0;
    while(1)
    {
        c = getchar();
        if (c != ' ' && c != '\n')
        {
            num = num * 10 + c - '0';
        }
        else
        {
            arr[len++] = num;
            num = 0;
            if(c == '\n')
                break;
        }
    }
    return len;
}

void sort_even_odd(int n, int arr[])
{
    int data[n],cnt=0;
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            data[cnt++] = arr[i];
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            data[cnt++] = arr[i];
    for(int i = 0; i < n; i++)
      arr[i] = data[i];
}

void Print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
