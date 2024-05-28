#include <stdio.h>

#define DATA_SIZE 20

int Input_ch(int arr[], int n);
void SwapArr(int arr[], int i, int j);
void sort_array(int size, int a[]);
void Print(int arr[], int len);


int main()
{
    int data[DATA_SIZE] ;
    int size = Input_ch(data,DATA_SIZE);
    sort_array(size,data);
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


void SwapArr(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void sort_array(int  len, int arr[])
{
    int noSwap;
    for (int i = 0; i < len; i++)
    {
        noSwap = 1;
        for (int j = len - 1; j > i; j--)
        {
            if(arr[j-1] > arr[j])
            {
                SwapArr(arr, j-1, j);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}


void Print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
