#include <stdio.h>

int main() {
	float celcius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;
	printf("%s\t%s\n", "======",  "==========");
	printf("%s\t%s\n", "Celcius", "Fahrenheit");
	printf("%s\t%s\n", "======",  "==========");

	while(celcius <= upper) {
		fahr = (9.0/5.0) * celcius + 32.0;
		printf("%3.0f\t%6.2f\n",celcius, fahr);
		celcius += step;
	}
}
