#include <stdio.h>

void main3() {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	char name[50];
	int result1 = 1 + 1;
	int result2 = 2 - 1;
	int result3 = 3 * 3;
	int result4 = 10 / 2;
	// �н��� ��Ģ����
	// �̸��� �Է��ϼ��� (���)
	// �̸� (�Է�)

	printf("�н���\n\n");

	printf("�̸��� �Է��ϼ��� ");
	scanf("%s", name);

	printf("\n1. 1 + 1 = ");
	scanf("%d", &num1);

	// 2-1

	printf("\n2. 2 - 1 = ");
	scanf("%d", &num2);

	// 3*3
	printf("\n3. 3 * 3 = ");
	scanf("%d", &num3);

	// 10/2

	printf("\n4. 10 / 2 = ");
	scanf("%d", &num4);

	printf("\n\n%s�� �����", name);
	printf("\n\n�̸� : %s \n\n", name);
	printf("1. 1 + 1 = %d \n\n", num1);
	printf("2. 2 - 1 = %d \n\n", num2);
	printf("3. 3 * 3 = %d \n\n", num3);
	printf("4. 10 / 2 = %d \n\n", num4);

	printf("\n\n������");

	printf("\n\n1. 1 + 1 = %d", result1);
	printf("\n\n2. 2 - 1 = %d", result2);
	printf("\n\n3. 3 * 3 = %d", result3);
	printf("\n\n4. 10 / 2 = %d\n", result4);
	
	// +, -, *, /
	// ���� = 
	// %
}