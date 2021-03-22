#include <stdio.h>
#include <math.h>
#include "rlutil/rlutil.h" // color library


int main() {
  //variables declaration
  float y, z, result;

  while (1) { //while true
    printf("Введіть значення y: ");
    scanf("%f", &y);
    printf("Введіть значення z: ");
    scanf("%f", &z);

    if (z - 2 * y == 0) {
      setColor(RED);
      printf("\nДля заданих значень y та z виконується ділення на 0\n");
      setColor(WHITE);
      printf("Спробуйте ще раз...\n\n");
      continue;
    }
    else if (3 * (y / (z-2*y) ) < 0) {
      setColor(RED);
      printf("\nДля заданих значень y та z виконується добування кореня з від'ємого числа\n");
      setColor(WHITE);
      printf("Спробуйте ще раз...\n\n");
      continue;
    }
    else {
      break;
    }
  }

  //Output
  result = sqrt(3 * (y / (z-2*y))) - z * y;
  printf("\n***Результати***\n");
  printf("Відповідь: ");
  setColor(GREEN);
  printf("%.2f\n", result);
  setColor(WHITE);

  return 0;
}
