#include <stdio.h>

int main3() {
	// ����, �Լ� ==> �ڷ���
	// 1byte == Bbit : 256������ ����� �� (2^8)
	// 1bit : 2������ ����� �� (2^1)	== 0 or 1 (0,1)
	// 2bit : (2^2)������ ����� �� == 00 or 01 or 10 or 11 (0,1,2,3)

	char c;			// 0 ~ 255 (���� 26����, �ѱ� 256������ �Ѿ						// ����
	short s;		// 2byte		-32768~65536 (65536 ������ ����� �� , 2^16��)		// ���� ����(-65536)
	int i;			// 4byte	(-21��-21��)											// ����
	long ll;		// 8byte	(����)													// ū ����
	float f;		// 4byte	(�Ҽ���)												// �Ǽ�
	double d;		// 8byte	(�Ҽ���)												// ū �Ǽ�

	unsigned char uc;		// 0~256
	unsigned int ui;		// 0~4200000000(42��)
	
	return 0;		
}