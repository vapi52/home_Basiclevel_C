#include <stdio.h>

void arch_st(void);

int main(void)
{
    arch_st();
    return 0;
}

void arch_st(void)
{
    char ch,previus;
    int count=1;
    previus = getchar();
    do
     {
      ch = getchar();
      if(ch == previus)
       ++count;
      else
      {
       printf("%c%d",previus,count);
       previus = ch;
       count = 1;
      }
     }
    while(ch != '.');
}
