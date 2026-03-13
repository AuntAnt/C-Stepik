#include <stdio.h>

void digit_from_range() {
  int a, b;
  scanf("%d %d", &a, &b);

  for (int i = b; i >= a; i--) {
    printf("%d ", i);
  }
}

void factorial() {
  int a;
  scanf("%d", &a);

  int result = 1;
  for (int i = 1; i <= a; i++) {
    result *= i;
  }

  printf("%d\n", result);
}

void fibonachi() {
  int n;
  scanf("%d", &n);

  int prev_1 = 1;
  int prev_2 = 1;
  for (int i = 3; i <= n; i++) {
    int tmp = prev_1 + prev_2;
    prev_1 = prev_2;
    prev_2 = tmp;
  }

  printf("%d\n", prev_2);
}

void some_shitti_excercise() {
  int a, b;
  scanf("%d %d", &a, &b);

  int counter;
  for (int i = a; i <= b; i++) {
    counter = i;
    for (int j = 0; j < counter; j++) {
      printf("%5d", i);
    }
    // counter++;
  }
}
