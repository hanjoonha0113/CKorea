#include <stdio.h>

int function1(int num2) {
	int num1 = 3333;
	return num1;
}

int function2(int num1, int num3) {
	int num2 = function1;
	return num2;
		// 3333À» Ãâ·Â
}
int main4(int num2) {
	int num3 = function2;
	printf("%d\n", num3);

	return num2;
}