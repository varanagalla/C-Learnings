#include <stdio.h>

/*
 * Write a program to remove trailing blanks and tabs from each
 * line of input, and to delete entirely blank lines.
 */

#define MAXLENGTH 1000
int getLine(char line[], int limit);
int rtrimline(char line[], int len);

int main() {
  int len, tlen;
  char line[MAXLENGTH];
  while ((len = getLine(line, MAXLENGTH)) > 0) {
    tlen = rtrimline(line, len);
    printf("\"%s\"", line);
  }
  return 0;
}

int getLine(char line[], int limit) {
  int c;
  int i;
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

int rtrimline(char line[], int l) {
  int i;
  for (i = l - 2; i > 0 && (line[i] == '\t' || line[i] == ' '); --i)
    ;
  if (i < l - 2) {
    line[++i] = '\n';
    line[++i] = '\0';
  }else{
	i = l;
  }
  return i;
}
