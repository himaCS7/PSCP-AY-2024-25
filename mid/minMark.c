#include <stdio.h>
int main() {
    int a[] = { 8, 6, 5, 9, 7, 2, 3, 5, 6, 8}, n=8;
	int i, pos=0, small = a[0];
	for(i=1; i < n; i++)
		if(a[i] < small)
		{
			small = a[i];
			pos = i;
		}
	printf("The smallest mark = %d it's positon (0-n-1)=%d\n", small, pos);
	return 0;
}
