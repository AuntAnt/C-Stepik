#include <stdio.h>
#include <math.h>

void with_accuracy() {
	double x, y, acc;
    scanf("%lf %lf %lf", &x, &y, &acc);
    double diff = fabs(x - y);
    printf("%f\n", diff);
    printf("%d\n", diff <= acc);
}

void my_abs() {
	int x, abs_x;
    scanf("%d", &x);

    abs_x = x < 0 ? x * -1 : x; //x * (x < 0) * -1; 
    printf("%d\n", abs_x);
}

void coord_square_num() {
	double x, y;
	scanf("%lf %lf", &x, &y);

	// 1 ++
	// 2 -+
	// 3 --
	// 4 +-
	int first = x > 0 && y > 0;
	int second = x < 0 && y > 0;
	int third = x < 0 && y < 0;
	int fourth = x > 0 && y < 0;
	int num = first + 2 * second + 3 * third + 4 * fourth;
	printf("%d\n", num);
}

void master_switcher() {
	int s1, s2, s3, m;
	scanf("%d %d %d %d", &s1, &s2, &s3, &m);

	// -1 => all 0
	// 1 => all 1
	// 0 => all self
	//
	//
	// s=0 m=1
	// s1 = s1 * (m != -1 || m == 1); //(m != -1 && m != 0);
	// s2 = s2 * (m != -1 && m != 0);
	// s3 = s3 * (m != -1 && m != 0);
	switch (m) {
		case 0:
			break;
		case 1:
			s1 = 1; s2 = 1; s3 = 1;
			break;
		case -1:
			s1 = 0; s2 = 0; s3 = 0;
			break;
	}
	printf("%d %d %d\n", s1, s2, s3);
}
