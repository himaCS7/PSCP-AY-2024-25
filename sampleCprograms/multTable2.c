#include <stdio.h>
int main() {
  int n=9;
//  printf("Enter an integer: ");
//  scanf("%d", &n);

  for (int i = 1; i <= 10; ++i) {
  	for (int j = 1; j <= 10; ++j) {
    		printf("%d * %d = %d", i, j, j * i);
		//printf("\t");
		printf("   ");
	}
	printf("\n");
  }
  return 0;
}
