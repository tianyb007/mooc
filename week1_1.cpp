/*
	@author: tianyb
	date: 2022-5-12
*/


 










/*
	½»»»a, bµÄÖµ¡£ 
*/ 
#include <stdio.h>
void swarp(int *pa, int *pb);

int main () {
	int a = 5, b = 6;
	swarp(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	
	return 0;
}

void swarp(int *pa, int *pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
