#include "stdio.h"
#include "math.h"
#include "rlutil/rlutil.h" // color library

int main() {
  int x;
  float n;

  printf("Введіть n: ");
  scanf("%f", &n);
  printf("Введіть x: ");
  scanf("%d", &x);

  float j, i, s, p = 0;
  for (i = 1; i <= n; i++) {
    for (s = 1, j = 1; j <= i; j++) {
      s *= j / x;
    }
    p += s;
  }
  printf("\n***Результати***\n");
  printf("Відповідь: ");
  setColor(GREEN);
  printf("%.f\n", p);
  setColor(WHITE);
  return 0;
}
