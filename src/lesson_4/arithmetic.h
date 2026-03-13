#include <stdio.h>
#include <math.h>

void perimeter() {
 //  int a, b;
	// scanf("%d %d", &a, &b);

	// printf("%d\n", 2 * a + 2 * b);

	// int start, end;
	// double price;
        
 //  scanf("%d %d %lf", &start, &end, &price);

 //  double result = price * (end - start);   
 //  printf("%.2f\n", result);

  // double pi = 3.1415926;
  // int grad;

  // scanf("%d", &grad);

  // double result = grad * (pi / 180);
  // printf("%.2f\n", result);

  int input;
  scanf("%d", &input);
  
  printf("%d\n", input % 2 == 0);
}

void distance() {
  double x1, y1, x2, y2;

  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

  double x = x2 - x1;
  double y = y2 - y1;
  double result = sqrt(pow(x, 2) + pow(y, 2));
  printf("%.2f\n", result);
}

void trinagle_square() {
  double a, b, angle;
  double pi = 3.141593;

  scanf("%lf %lf %lf", &a, &b, &angle);
  double rad_angle = angle / 180 * pi;
  
  double square = (a * b * sin(rad_angle)) / 2;
  printf("%.2f\n", square);
}
