// this program calculates the volume of a sphere
// using the traditional formula

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h> // to include pi

int main(void)
{
  int r;
  float volume;
  
  printf("Enter sphere radius: ");
  scanf("%d", &r);

  if (r < 0)
    {
      printf("Please enter a positive integer\n");
      main();
    }
  else
    {
      volume = ((4.0f / 3.0f) * M_PI * (r*r*r));
      printf("Volume of a sphere with radius %d is %.2f\n", r, volume);
    }
      
  return 0;
}
