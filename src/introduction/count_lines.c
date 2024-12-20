#include <stdio.h>
int main() {
	long nl = 0;
	int c;
	for(; (c = getchar()) != EOF; ) {
		if(c == '\n')
			++nl;
	}
	printf("You entered %ld lines.\n", nl);
}
