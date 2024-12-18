#include <stdio.h>

int main() {
  float fahr, celsius; //In C, all variables must be declaed before they are used.
  int lower, upper, step;

  lower = 0; /* lower lmit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  fahr = lower;
  printf("===================================\n");
  printf("Fahrenheit \t Celsius\n");
  printf("===================================\n");
  while (fahr <= upper) {
	celsius = (5.0/9.0) * (fahr - 32);
	printf("%3.0f\t\t%6.4f\n", fahr, celsius);
	fahr += step;
  }
}
