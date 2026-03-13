#include <stdio.h>

void print_flag() {
  int lines = 13;
  int columns = 50;

  for (int line_idx = 0; line_idx < lines; line_idx++) {
    for (int column_idx = 0; column_idx <= columns; column_idx ++) {
      if (line_idx >= 1 && line_idx <= 6 && column_idx < 8) {
        printf("*");
      } else {
        printf("_");
      }
    }
    printf("\n");
  }
}
