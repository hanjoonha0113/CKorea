#include <stdio.h>

// �Լ� : �����ڰ� ���� ����� ���
// ������ : ���α׷��� �� �������ִ� ���

// �Լ�
// �ڷ��� �Լ���(){}

// ���޹��� ���� ���� �������� ���� ���ϴ� ���
void AbsPlus(int num1, int num2) {			// ���� 2���� ���޹޴� �Լ�
	int num3 = 0, num4 = 0, result = 0;		// AbsPlus �ȿ��� ���� ������ AbsPlus�� ������ ������(��������)
	if (num1 < 0) {
		num3 = num1 * (-1);			// num1�� ������ ����� �ٲ� �ִ´�.
	}
	else {
		num3 = num1;			// num1�� ����� �״�� num3�� �ִ´�.
	}
	if (num2 < 0) {
		num4 = num2 * (-1);			// num1�� ������ ����� �ٲ� �ִ´�.
	}
	else {
		num4 = num2;			 
	}
	result = num3 + num4;
	printf("%d \n", result);
}

// ���޹��� ���� ���� ����(�Լ�)���� ���� ���� ���
void AbsMinus(int num1, int num2) {			// ���� 2���� ���޹޴� �Լ�
	if (num1 <  0) {
		num1 = num1 * -1;
	}
	if (num2 < 0) {
		num2 = num2 * -1;
	}
	int result = num1 - num2;
	printf("%d \n", result);
}

// ���� 3���� ���ϴ� �Լ� (�Լ�����)
void Plus3(int n1, int n2, int n3 ) {
	int result = n1 + n2 + n3;
	printf("%d \n", result);
}

int main0() {
	// ������Ʈ�� �����ϸ� main()�Լ��� �����Ѵ�.
	AbsPlus(3, 4);			// 3 + 4 == 7

	AbsPlus(-3, 4);			// |(-3)| + 4 == 7

	AbsPlus(3, -4);			// 3 + |(-4)| == 7

	AbsPlus(-3, -4);		// |(-3)| + |(-4)| == 7

	AbsMinus(3, 4);				// 3 - 4 == -1

	AbsMinus(-3, 4);			// |(-3)| - 4

	AbsMinus(3, -4);			// 3 - |(-4)|
		
	AbsMinus(-3, -4);			// |(-3)| - |(-4)|

	Plus3(3, 4, 5);

	return 0;
}