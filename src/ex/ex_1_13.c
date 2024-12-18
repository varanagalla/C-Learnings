/*
 * Write a program to print a histogram of the lengths of words in
 * its input. It is easy to draw the histogram with the bars horizontal;
 * a Vertical orientation is more challenging.
 */

#include <stdio.h>
#define MAXWORD 11 // More than this is considered as overflow.
#define MAXHIST 15 // For Normalization

int main() {
  int c, i, nc;
  int len;
  int overflow;
  int biggerWord;
  int wl[MAXWORD];

  /* initialization */
  nc = overflow = biggerWord = 0;
  for (i = 0; i < MAXWORD; i++) {
    wl[i] = 0;
  }

  /* accept input here */
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (nc > 0 && nc < MAXWORD) {
        ++wl[nc];
      } else if (nc >= MAXWORD) {
        ++overflow;
      }
      nc = 0;
    } else {
      ++nc;
    }
  }

  /* print histogram here */
  // Find the bigger word for normalization
  for (i = 1; i < MAXWORD; i++) {
    if (wl[i] > biggerWord) {
      biggerWord = wl[i];
    }
  }

  for (i = 1; i < MAXWORD; i++) {
    printf("%2d - %2d: ", i, wl[i]);
    if (wl[i] > 0) {
      if ((len = wl[i] * MAXHIST / biggerWord) == 0) {
        len = 1;
      }
    } else {
      len = 0;
    }

    while (len > 0) {
      printf("*");
      --len;
    }
    printf("\n");
  }

  if (overflow > 0) {
    printf("Found %d overflow items \n", overflow);
  }

  return 0;
}
