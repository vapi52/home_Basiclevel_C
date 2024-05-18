#include <stdio.h>

#define SIZE 10

int input_arr(int n, int a[]);
void num_seс_digit_end_null(int size, int a[]);

int main(void)
{
    int arr[SIZE] = {0};
    input_arr(SIZE, arr);
    num_seс_digit_end_null(SIZE, arr);

    return 0;
}


int input_arr(int n, int a[])
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return i;
}

void num_seс_digit_end_null(int size, int a[])
{
    int a2[size];
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if((a[i] / 10 % 10 == 0))
        {
            a2[count] = a[i];
            count++;
        }
    }
    for(int i = 0; i < count; i++)
        printf("%d ", a2[i]);
}
