#include <stdio.h>
#include <math.h>
#include "rlutil/rlutil.h" // color library

int main() {
  float dx, y, a, b; // variables declaration

  while (1) {
    printf("Введіть нижню границю інтервалу: ");
    scanf("%f", &a);
    printf("Введіть верхню границю інтервалу: ");
    scanf("%f", &b);
    printf("Введіть крок інтервалу: ");
    scanf("%f", &dx);

    if (a + dx < b) {
      printf("\n\n***Результати***\n");

      printf("Нижня границя: ");
      setColor(GREEN);
      printf("%.2f\n", a);
      setColor(WHITE);

      printf("Верхня границя: ");
      setColor(GREEN);
      printf("%.2f\n", b);
      setColor(WHITE);

      printf("Крок: ");
      setColor(GREEN);
      printf("%.2f\n", dx);
      setColor(WHITE);

      printf("\n********************\n");
      printf(" X\t\tY\n");
      printf("********************\n");

      while (a <= b) {
        y = pow(4, -cos(a));

        printf(" %.2f\t\t%.2f\n", a, y);
        a += dx;
      }
      break;
    }
    else {
      setColor(RED);
      printf("\nВведенні некоректні значення нижньої та верхньої границі\n");
      setColor(WHITE);
      printf("Спробуйте ще раз...\n\n");
      continue;
    }
  }

  return 0;
}
