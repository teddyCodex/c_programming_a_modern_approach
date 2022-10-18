/* This program converts farenheit to celcius */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALING_FACTOR (5.0f / 9.0f)

int main(void)
{
  float farenheit, celsius;

  printf("Enter farenheit temperature: ");
  scanf("%f", &farenheit);

  celsius = (farenheit - FREEZING_PT) * SCALING_FACTOR;

  printf("Celsius equivalent is: %.1f\n", celsius);
  return 0;
}
