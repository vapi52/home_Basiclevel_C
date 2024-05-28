#include <stdio.h>

#define DATA_SIZE 1000

void print_dgt(int arr[], int size);
void cnt_dgt(char n[], int res[]);


int main()
{
char data[DATA_SIZE];
int a[10] = {0};
    scanf("%s", data);
    cnt_dgt(data, a);
    print_dgt(a,10);
    return 0;
}

void print_dgt(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        if (arr[i] > 0)
            printf("%d %d\n", i, arr[i]);
}

void cnt_dgt(char n[], int res[])
{
    for (int i = 0; n[i] != 0; i++)
        res[n[i] - '0']++;
}
