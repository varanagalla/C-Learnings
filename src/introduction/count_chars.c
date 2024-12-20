#include <stdio.h>

int main() {
	long nc;
	for(nc = 0; getchar() != EOF; ++nc)
		;//Empty body. This is plaed in next line for better
		 //readability.
	printf("Got %ld characters.\n", nc);
}
