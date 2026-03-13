#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randoms() {
	int S, E;
  scanf("%d %d", &S, &E);
    
  srand(time(NULL));
  printf("%d\n", S + rand() % (E - S + 1));
}
