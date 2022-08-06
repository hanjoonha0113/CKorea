#include <stdio.h>

// Sum
void Sum(int n1, int n2)
{
	int result = n1 + n2;
	printf("%d \n", result);
}

// Sub
void Sub(int n1, int n2)
{
	int result = n1 - n2;
	printf("%d \n", result);
}

// Mul
void Mul(int n1, int n2)
{
	int result = n1 * n2;
	printf("%d \n", result);
}

// Div
void Div(int n1, int n2)
{
	int result = n1 / n2;
	printf("%d \n", result);
}

// 숫자 2개를 받아서 각각 절댓값으로 만들어 더하기 (절댓값 : 마이너스를 플러스로 바꿈)
// A
void  A(int n1, int n2) {
	if (n1 <= 0) {
		n1 = n1 * -1;
	}
	if (n2 <= 0) {
		n2 = n2 * -1;
	}
	int result = n1 + n2;
	printf("%d \n", result);
}


// 숫자 2개를 받아서 각각 절댓값으로 만들어 빼기 (절댓값 : 마이너스를 플러스로 바꿈)
// B
void  B(int n1, int n2) {
	if (n1 <= 0) {
		n1 = n1 * -1;
	}
	if (n2 <= 0) {
		n2 = n2 * -1;
	}
	int result = n1 - n2;
	printf("%d \n", result);
}

// C언어의 시작점은 main() 함수이다.

int main()
{
	Sum(2, 2);

	Sub(2, 2);
	
	Mul(2, 2);
	
	Div(2, 2);

	A(-3, 2);

	B(-5, -1);

	return 0;
}