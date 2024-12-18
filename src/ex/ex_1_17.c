#include <stdio.h>

/*
 * Write a program to print all input data lines that are longer than 80
 * Characters.
 */
#define CHARLIMIT 80
#define MAXLENGTH 1000
int getLine(char line[], int maxlength);

int main() {
  int len;
  char line[MAXLENGTH];
  while ((len = getLine(line, MAXLENGTH)) > 0) {
    if (len > CHARLIMIT) {
      printf("%s", line);
    }
  }
}

int getLine(char line[], int maxlength) {
  int c;
  int i = 0;
  for (; i < MAXLENGTH - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}
