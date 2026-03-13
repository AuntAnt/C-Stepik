#include <locale.h>
#include <stdio.h>
#include <math.h>

void primitive_calulator() {
  char c;
  int a, b;
    
  scanf("%d %c %d", &a, &c, &b);
    
  switch (c) {
    case '^':
      printf("%.2f\n", pow(a, b));
      break;
    case '+':
      printf("%.2f\n", (double)a + (double)b);
      break;
     case '-':
      printf("%.2f\n", (double)a - (double)b);
      break;  
    case '*':
    case 'x':
      printf("%.2f\n", (double)a * (double)b);
      break;
    case '/':
    case ':':
      switch (b) {
        case 0:
          printf("ERROR!\n");
          break;
        default:
          printf("%.2f\n", (double)a / (double)b);
          break;
      }
      break;
    default:
      printf("ERROR!\n");
  }
}

void year_day() {
  int m, d;
  scanf("%d %d", &m, &d);

  int result = 0;
  
  switch (m) {
    case 12:
      result += d;
    case 11:
      result += m == 11 ? d : 30;
    case 10:
      result += m == 10 ? d : 31;
    case 9:
      result += m == 9 ? d : 30;
    case 8:
      result += m == 8 ? d : 31;
    case 7:
      result += m == 7 ? d : 31;
    case 6:
      result += m == 6 ? d : 30;
    case 5:
      result += m == 5 ? d : 31;
    case 4:
      result += m == 4 ? d : 30;
    case 3:
      result += m == 3 ? d : 31;
    case 2:
      result += m == 2 ? d : 28;
    case 1:
      result += m == 1 ? d : 31;
      break;
 }

  printf("%d\n", result);
}

void digit_sum() {
  int k, x;
  scanf("%d %d", &k, &x);
    
  int result = 0;
  int f_part, s_part;

  switch (k) {
    case 1:
      result = x;
      break;
    case 2:
      result = (x / 10) * (x % 10);
      break;
    case 3:
      f_part = x % 100;
      result = (x / 100) * (f_part / 10) * (f_part % 10);
      break;
    case 4:
      f_part = x / 100;
      s_part = x % 100;
      result = (f_part / 10) * (f_part % 10) * (s_part / 10) * (s_part % 10);
      break;     
  }
 
  printf("%d\n", result);
}

void your_age() {
  int age;
  scanf("%d", &age);

  // 1, 21, 91 год
  // 2, 3, 4, 22, 53, 74 года
  // 5, 6, 7, 11, 20, 25 лет

  switch (age) {
    case 1:
    case 21:
    case 31:
    case 41:
    case 51:
    case 61:
    case 71:
    case 81:
    case 91:
      printf("Мне %d год\n", age);
      break;
    case 2 ... 4:
    case 22 ... 24:
    case 32 ... 34:
    case 42 ... 44:
    case 52 ... 54:
    case 62 ... 64:
    case 72 ... 74:
    case 82 ... 84:
    case 92 ... 94:
      printf("Мне %d года\n", age);
      break;
    default:
      printf("Мне %d лет\n", age);
  }
}

void unix_perm() {
  char r, w, x;
  scanf("%c%c%c", &r, &w, &x);

  int result = 0;
   
  switch (r) {
    case '-':
      break;
    case 'r':
      result += 4;
      break;
    default:
      printf("Invalid format");
      return;
  }

  
switch (w) {
    case '-':
      break;
    case 'w':
      result += 2;
      break;
    default:
      printf("Invalid format");
      return;
  }


switch (x) {
    case '-':
      break;
    case 'x':
      result += 1;
      break;
    default:
      printf("Invalid format");
      return;
  }

  printf("%d\n", result);
}
