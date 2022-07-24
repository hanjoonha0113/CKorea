#include <stdio.h>

void main2() {
	int 숫자 = 0;			// %d
	// char 문자;			// %c
	char 문자열[100] = "A";	// %s
	float 실수 = 0;		// %f

	printf("%d \n", 숫자);
	printf("%s \n", 문자열);
	printf("%f \n", 실수);
	
	// 입력
	printf("숫자를 입력하세요 >> \n");
	scanf("%d", &숫자);

	printf("문자열을 입력하세요 >> \n");
	scanf("%s", &문자열);

	printf("실수를 입력하세요 >> \n");
	scanf("%f", &실수);

	// 츨력
	printf("내가 입력한 숫자는 : %d \n", 숫자);
	printf("내가 입력한 문자열은 : %s \n", 문자열);
	printf("내가 입력한 실수는 : %f \n", 실수);
	
	

}