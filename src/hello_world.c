#include <stdio.h>

int main(void)
{
  char str[20];
  printf("What is your name? ");
  scanf("%[^\n]%*c", str);
  printf("hello, %s\n", str);
}
