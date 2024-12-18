#include <stdio.h>
/* Symbolic constants, not variables, so they do not appear in declaration. */
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  int fahr;
  /*
	part 1: fahr = 0; is the initialization part is done once, before the loop proper is entered.
	part 2: fahr <= 300; is the test for condition that controls the loop. This condition is
	        evaluated; if it is true, the body of the loop is executed.
   */
  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
	printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }
}
