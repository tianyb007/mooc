/*
	@author: tianyb
	date: 2022-5-12
	��������ɹ�����1�����򷵻�0�� 
*/
#include <stdio.h>
int divide(int a, int b, int *result);

int main() {
	int a = 5, b = 2, c;
//	int *result;
	if (divide(a, b, &c)) {
		printf("%d/%d=%d", a, b, c);
	}
	return 0;
} 

int divide(int a, int b, int *result){
	int ret = 1;
	if(b == 0) {
		ret = 0;
	}
	else {
		*result = a / b;
	}
	return ret;
}
