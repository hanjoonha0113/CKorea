#include <stdio.h>

void main8() {
	int result1 = 3 - 5;
	printf("3-5=%d", result1);

	// 1+1
	// 2-1
	// 3*3
	// 10/2
	// 10.0/3.0

	int result2 = 1 + 1;
	int result3 = 2 - 1;
	int result4 = 3 * 3;
	int result5 = 10 / 2;
	float result6 = 10.0 / 3.0;

	printf("1+1=%d \n", result2);
	printf("2-1=%d \n", result3);
	printf("3*3=%d \n", result4);
	printf("10/2=%d \n", result5);
	printf("10.0/3.0=%f \n", result6);

	// % : ������ ���ϱ�
	int result7 = 10 % 3;		// == 1
	printf("10�� 3���� ���� �������� %d�̴�. \n", result7);

	// ����� ���Ҷ�, Ȧ¦�� ������ ��
	// 3�� ��� == 3���� ���� �������� 0
	printf("3�� ����� %d��/�� 0�� ����.\n", result7);

	int num = 3;
	printf("num�� Ȧ���� 1, ¦���� 0 : %d\n", num % 2);
}