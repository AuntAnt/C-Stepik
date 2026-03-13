#include <stdio.h>

void lift_emulator() {
  int a, b, c; // floors
  scanf("%d %d %d", &a, &b, &c);

  int f1, f2, f3;

  if (a == b && b == c) {
    printf("%d %d %d\n", a, b, c);
  }

  // if (a <= b) {
  //   if (b <= c) {
  //     f1 = a;
  //     f2 = b;
  //     f3 = c;
  //   } else {
  //     if (a <= c) {
  //       f1 = a;
  //       f2 = c;
  //       f3 = b; 
  //     } else {
  //       f1 = c;
  //       f2 = a;
  //       f3 = b; 
  //     }
  //   }
  // } else { //a > b
  //   if (b <= c) {
  //     if (a <= c) {
  //       f1 = b;
  //       f2 = a;
  //       f3 = c;
  //     } else {      
  //       f1 = b;
  //       f2 = c;
  //       f3 = a;
  //     }
  //   } else { // b > c
  //     f1 = c;
  //     f2 = b;
  //     f3 = a;
  //   }
  // } 


  int min = a;
  int max = a;

  if (a > b) min = b;
  if (c < min) min = c; 
  printf("%d %d %d\n", f1, f2, f3);
}
