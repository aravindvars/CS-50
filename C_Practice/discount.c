#include <cs50.h>
#include<stdio.h>

float discount(float price, int percentage);

int main(void)
{
  float price = get_float("What's the price listed?: ");
  int percent_Off = get_int("Percent off: ");
  float sale_price = discount(price, percent_Off);
  printf("Sale price is %.2f\n", sale_price);
}

float discount(float price, int percentage)
{
  return price * (100 - percentage)/100;
}