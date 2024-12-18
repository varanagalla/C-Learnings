#include <stdio.h>

int power(int m, int n);

int square(int a);

int iseven(int n);

int power_iter(int m, int n);

int power_ball(int base, int n, int result);

int power_no_rec_iter(int m, int n);


int main() {
  int i;
  for (i = 0; i < 10; i++) {
    printf("%d %d %d \n", i, power_no_rec_iter(2, i), power_no_rec_iter(-3, i));
  }
}

int square(int a) { return a * a; }

int iseven(int n) { return n % 2 == 0; }

int power(int base, int n) {
  if (n == 0) {
    return 1;
  } else if (iseven(n)) {
    return square(power(base, n / 2));
  } else {
    return base * power(base, n - 1);
  }
}

int power_ball(int base, int n, int result) {
  if (n == 0) {
    return result;
  } else if (iseven(n)) {
    return power_ball(square(base), n / 2, result);
  } else {
    return power_ball(base, n - 1, base * result);
  }
}
int power_iter(int base, int n) { return power_ball(base, n, 1); }

int power_no_rec_iter(int base, int n) {
  int result;
  result = 1;
  while (n != 0) {
    if (iseven(n)) {
      base = square(base);
      n /= 2;
    } else {
      result *= base;
      n -= 1;
    }
  }
  return result;
}
