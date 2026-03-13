#include <stdio.h>
#include <math.h>

void coub() {
  int side;
  scanf("%d", &side);

  int s_area = pow(side, 2);
  int s_surface = 6 * s_area;
  int volume = pow(side, 3);

  printf("%d %d %d\n", s_area, s_surface, volume); 
}

void volumes() {
  double pi = 3.14159265358979323846;
  int r, h;

  scanf("%d %d", &r, &h);
  double vu = h * pi * pow(r, 2);
  double vk = vu / (double)3;

  printf("%.2f %.2f\n", vu, vk); 
}

void seconds_to_hhmm() {
  int input;
  scanf("%d", &input);
  int minutes_total = input / 60;
  int minutes = minutes_total % 60;
  int hours = minutes_total / 60;

  printf("%d %d\n", hours, minutes);
}

void even_num_diff() {
  int hours;
  scanf("%d", &hours);

  int r = hours / 3;
  printf("%d\n", (int)pow(2, r));
}

void to_metric() {
  int f, d;
  scanf("%d %d", &f, &d);
    
  double d_to_cm = 2.54;
  int total_d = f * 12 + d;
  double total_cm = total_d * d_to_cm;

  int m = total_cm / 100;
  double cm = total_cm - m * 100;  
  printf("%d\'%d\" = %d.%.0f m\n", f, d, m, cm);
}


void ring_area() {
  double pi = 3.14159265358979323846;
  int ri, ro;
  scanf("%d %d", &ri, &ro);
    
  int width = ro - ri;
  double area = pi * (pow(ro, 2) - pow(ri, 2)) * 100.0;
  printf("%d %.2f\n", width, area);
}
