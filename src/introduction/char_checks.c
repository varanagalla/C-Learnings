#include <stdio.h>

int main() {
	/* what does this expression yield? getchar() != EOF 0 or 1? */
	int ans = (getchar() != EOF);
	printf("\"getchar() != EOF\" yiels => %d\n", ans);
	printf("The value of EOF is %d\n", EOF);
}
