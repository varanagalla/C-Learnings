#include <stdio.h>

/* copy input to output: 1st version */
int main() {
	/* we can't char since c must be
	 * big enough to hold EOF in addition to any possible char.
	 * EOF is an integer defined in <stdio.h> */
	int c;

	//c = getchar();

	while((c = getchar()) != EOF) {
		putchar(c);
		//c = getchar();
	}
	printf("Thank you!!! Come back again \n");
}
