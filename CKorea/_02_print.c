#include <stdio.h>

void main2() {
	//���� ����� �� ���� �����ʹ� �����س��� : ����
	char name = 'C';		//���� �������
	int number = 123;		//���� �������
	int number2 = -123;
	float number3 = 3.141;	//�Ҽ��� �ִ� ���� �������

	// ���� : �������
	// ������������� ��������̸� = ������ ��;

	printf("hello %C \n", name);	// ���� ���
	printf("hello %d \n", number);
	printf("hello %d \n", number2);	// ���� ���
	printf("hello %f \n", number3);	// �Ҽ��� �ִ� ���� ���
	
	// %c : �ѱ���
	// %d : ����
	// %f : �Ҽ��� �ִ� ����
	// %s : ��������
}