#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int paise = get_int("Paise: ");
  float rupee = (float) paise / 100;
  printf("Rupee: %f\n", rupee);
}