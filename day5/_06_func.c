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

// ���� 2���� �޾Ƽ� ���� �������� ����� ���ϱ� (���� : ���̳ʽ��� �÷����� �ٲ�)
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


// ���� 2���� �޾Ƽ� ���� �������� ����� ���� (���� : ���̳ʽ��� �÷����� �ٲ�)
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

// C����� �������� main() �Լ��̴�.

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