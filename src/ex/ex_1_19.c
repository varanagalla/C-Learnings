#include <stdio.h>

/*
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reerses it input a line at a time.
 */

#define MAXLENGTH 1000
void reverse(char line[], int length);
int getLine(char line[], int limit);

int main() {
  int len;
  char line[MAXLENGTH];
  while ((len = getLine(line, MAXLENGTH)) > 0) {
    reverse(line, len);
    printf("%s", line);
  }
  return 0;
}

int getLine(char line[], int limit) {
  int i, c;
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i++] = c;
  }
  line[i] = '\0';
  return i;
}

void reverse(char line[], int length) {
  int start, end;
  start = 0;
  end = length - 2;
  int temp;

  while (start < end) {
    temp = line[start];
    line[start] = line[end];
    line[end] = temp;
    ++start;
    --end;
  }
}
