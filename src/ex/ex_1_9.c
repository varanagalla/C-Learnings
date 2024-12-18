/*
  Write a program to copy its input to its output,
  replacing each string (not sentence) of one or more blanks by a single blank.
 */
#include <stdio.h>
#define REPEATED_BLANKS 1
#define NO_BLANK_YET 0

int main() {
  int c, state;
  state = NO_BLANK_YET;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (state != REPEATED_BLANKS) {
        state = REPEATED_BLANKS;
        putchar(c);
      }

    } else {
	  state = NO_BLANK_YET;
      putchar(c);
    }
  }
}
