#include <stdio.h>

void main2() {
	//자주 사용할 것 같은 데이터는 저장해놓자 : 변수
	char name = 'C';		//글자 저장공간
	int number = 123;		//숫자 저장공간
	int number2 = -123;
	float number3 = 3.141;	//소수점 있는 숫자 저장공간

	// 변수 : 저장공간
	// 저장공간의형태 저장공간이름 = 저장할 값;

	printf("hello %C \n", name);	// 글자 출력
	printf("hello %d \n", number);
	printf("hello %d \n", number2);	// 숫자 출력
	printf("hello %f \n", number3);	// 소수점 있는 숫자 출력
	
	// %c : 한글자
	// %d : 숫자
	// %f : 소수점 있는 숫자
	// %s : 여러글자
}