#include "stdio.h"
#include "math.h"
#include "rlutil/rlutil.h" // color library

int main() {
  //variables declaration
  int sum = 0, running_method;
  char * used_loop;

  while (1) {
    // choosing a running method
    printf("Яким методом ви бажаєте виконати програму?\n\n");
    printf("****************************************************************\n");
    printf("З використанням циклу з параметром (цикл for) Введіть - 1\n");
    printf("З використанням циклу з передумовою (цикл while) Введіть - 2\n");
    printf("З використанням циклу з післяумовою (цикл do while) Введіть - 3\n");
    printf("****************************************************************\n");
    printf("\nВвести: ");
    scanf("%d", &running_method);

    if (running_method == 1) {
      for (int i=1; i<=25; i++) {
        if (i % 5 == 0) sum += i;
      }

      used_loop = "for";
      break;
    }
    else if (running_method == 2) {
      int i = 1;
      while (i <= 25) {
        if (i % 5 == 0) sum += i;
        i++;
      }

      used_loop = "while";
      break;
    }
    else if (running_method == 3) {
      int i = 1;
      do {
        if (i % 5 == 0) sum += i;
        i++;
      } while (i <= 25);

      used_loop = "do while";
      break;
    }
    else {
      setColor(RED);
      printf("\nВи ввели некоректне значення\n");
      setColor(WHITE);
      printf("Спробуйте ще раз...\n\n");
      continue;
    }
  }
  //Output
  printf("\n***Результати***\n\n");
  printf("Використано цикл: ");
  setColor(GREEN);
  printf("%s\n", used_loop);

  setColor(WHITE);

  printf("Сума чисел кратних 5 у діапазоні (1, 25): ");
  setColor(GREEN);
  printf("%d\n", sum);

  sum = pow(sum, 3);
  setColor(WHITE);
  printf("Куб суми: ");
  setColor(GREEN);
  printf("%d\n", sum);
  setColor(WHITE);
  return 0;
}
