#include <stdio.h>

#define SPACE ' '
#define NEXTLINE '\n'
#define TAB '\t'

int main() {
  int c;

  while((c = getchar()) != EOF) {
	if(c == SPACE || c == TAB) {
	  putchar(NEXTLINE);
	}else {
	  putchar(c);
	}
  }

  return 0;
}
