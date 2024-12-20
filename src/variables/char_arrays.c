#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len, max;
  char line[MAXLINE];
  char longest[MAXLINE];
  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    if (max < len) {
      max = len;
      copy(longest, line);
    }
  }
  if (max != 0) {
    printf("%s", longest);
  }

  return 0;
}

int getLine(char line[], int maxline) {
  char c;
  int i = 0;
  while (i < maxline - 1 && (c = getchar()) != EOF && c != '\n') {
    line[i] = c;
    i++;
  }
  if (c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
