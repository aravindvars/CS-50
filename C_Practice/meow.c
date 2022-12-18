#include <stdio.h>

void meow(int n); // A .h file contains all lines like this, which are usually a bread crumb to functions written in a .c file

int main(void)
{
  meow(4);
}

void meow(int n)
{
  for (int i=0; i<n; i++)
  {
    printf("meow\n");
  }
  
}