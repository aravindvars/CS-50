#include <stdio.h>
#include <cs50.h>

int main(void)
{
  float rupee = get_float("Rupee: ");
  int paise = rupee * 100;
  printf("Paise: %i\n", paise);
}