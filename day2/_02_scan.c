#include <stdio.h>

void main2() {
	int ���� = 0;			// %d
	// char ����;			// %c
	char ���ڿ�[100] = "A";	// %s
	float �Ǽ� = 0;		// %f

	printf("%d \n", ����);
	printf("%s \n", ���ڿ�);
	printf("%f \n", �Ǽ�);
	
	// �Է�
	printf("���ڸ� �Է��ϼ��� >> \n");
	scanf("%d", &����);

	printf("���ڿ��� �Է��ϼ��� >> \n");
	scanf("%s", &���ڿ�);

	printf("�Ǽ��� �Է��ϼ��� >> \n");
	scanf("%f", &�Ǽ�);

	// ����
	printf("���� �Է��� ���ڴ� : %d \n", ����);
	printf("���� �Է��� ���ڿ��� : %s \n", ���ڿ�);
	printf("���� �Է��� �Ǽ��� : %f \n", �Ǽ�);
	
	

}