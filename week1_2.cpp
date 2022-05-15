/*
//	选出数组里面的最大值和最小值。

*/
#include <stdio.h>

void minmax(int a[], int len, int *max, int *min);

int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 55,88, 0, -1, -100, 100};
	int min, max;
	minmax(a, sizeof(a)/sizeof(a[0]), &max, &min);
	printf("min = %d, max = %d", min, max);
	
	return 0;
}

void minmax(int a[], int len, int *max, int *min) {
	int i;
	*max = *min = a[0];
	for(i = 1; i < len; i++) {
		if (*max < a[i]) {
			*max = a[i];
		}
		if (*min > a[i]) {
			*min = a[i];
		}
	}
}
