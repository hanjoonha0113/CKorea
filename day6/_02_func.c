#include <stdio.h>

// Plus : 숫자 2개 더하기
int f1(int n1, int n2) {
	int result = n1 + n2;
	return result;
}

// Minus : 숫자 2개 빼기
int f2(int n1, int n2) {
	int result = n1 - n2;
	return result;
}
// Mul : 숫자 2개 곱하기
int f3(int n1, int n2) {
	int result = n1 * n2;
	return result;
}
// Div : 숫자 2개 나누기
double f4(int n1, int n2) {
	double result = (double)n1 / n2;
	return result;
}

int main2() {

	int plus_result = 0;
	int minus_result = 0;
	int mul_result = 0;
	double div_result = 0;

	// 함수 사용
	plus_result = f1(3, 4);
	minus_result = f2(3, 4);
	mul_result = f3(3, 4);
	div_result = f4(3, 4);
	//

	printf("%d \n", plus_result);
	printf("%d \n", minus_result);
	printf("%d \n", mul_result);
	printf("%lf \n", div_result);

	return 0;
}