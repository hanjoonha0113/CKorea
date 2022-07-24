#include <stdio.h>

void main() {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	char name[50];
	int result1 = 1 + 1;
	int result2 = 2 - 1;
	int result3 = 3 * 3;
	int result4 = 10 / 2;
	// 학습지 사칙연산
	// 이름을 입력하세요 (출력)
	// 이름 (입력)

	printf("학습지\n\n");

	printf("이름을 입력하세요 ");
	scanf("%s", name);

	printf("\n1. 1 + 1 = ");
	scanf("%d", &num1);
	(2 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");

	// 2-1

	printf("\n2. 2 - 1 = ");
	scanf("%d", &num2);
	(1 == num2) ? printf("정답입니다.\n") : printf("오답입니다.\n");

	// 3*3
	printf("\n3. 3 * 3 = ");
	scanf("%d", &num3);
	(9 == num3) ? printf("정답입니다.\n") : printf("오답입니다.\n");

	// 10/2

	printf("\n4. 10 / 2 = ");
	scanf("%d", &num4);
	(5 == num4) ? printf("정답입니다.\n") : printf("오답입니다.\n");

	printf("\n\n%s의 답안지", name);
	printf("\n\n이름 : %s \n\n", name);
	printf("1. 1 + 1 = %d \n\n", num1);
	printf("2. 2 - 1 = %d \n\n", num2);
	printf("3. 3 * 3 = %d \n\n", num3);
	printf("4. 10 / 2 = %d \n\n", num4);




}