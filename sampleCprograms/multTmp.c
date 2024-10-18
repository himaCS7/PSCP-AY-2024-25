#include <stdio.h>
int main() {

  for (int i = 1; i <= 10; ++i) 
  {
  	for (int j = 1; j <= 10; ++j) //print ith term of all tables
    		printf("%2d*%2d=%3d ", j, i, i * j);
	printf("\n");
  }
  return 0;
}
