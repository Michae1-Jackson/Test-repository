#include <stdio.h>

int main(void) {
  int n, k = 0;
  scanf("%d", &n);
  while (n) {
    n /= 10;
    k++;
  }
  printf("%d\n", k);
  return 0;
}