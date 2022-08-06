#include <stdio.h>

void add3(int num1, int num2, int num3) {
	printf("%d", num1 + num2 + num3);
}

void SumNone(int num1, int num2) {
	int result = num1 + num2 + 1;			// 1 + 1
	printf("%d \n", result);

}

void DivNotzero(int i, int j)			// 숫자  2개를 입력받을 것이기 때문에 int형 변수 2개를 선언
{
	// 0으로 나누는건 계산 안할 것
	if (j != 0) {
		int result = i / j;
		printf("%d \n", result);
	}
	else {
		printf("0으로는 나눌수 없습니다. \n");
	}
}

// 함수를 만드는 방법 :
// 자료형 함수명(){}
// () : 사용하는 곳에서 받을 값을 저장할 공간들을 만들어 놓기
// {} : 동작

void main5() {
	// 연산자 : 언어가 제공하는 기능 (+, -. *, /, =, >, ...)
	// 함수 : 개발자가 직접 만든 기능
	
	// 예시 : 0으로 나눌떄는 계산하지 않는 나누기
	// 연산자 / 는 0으로 나눌 때 프로그램이 에러발생 => 고치고 싶다!

	// 언어를 제공하는 사람 : 기호를 따로 제공
	// 예를 들면, 세개 더하기 기호, 네개 더하기 기호, 다섯개 더하기 기호, ... 무한
	// 그러면 너희가 만들어 ==> 함수

	// 한번에 3개를 더하는 기능을 가진 연산자를 만들자
	// 원래 더하기는 한번에 2개까지만 더할 수 있음 +
	// printf("%d", 2 + 3 4);				// 나는 2와 3과 4를 더하는 기호를 원한다.

	// add3 : 한번에 3개의 숫자를 더하는 기호(함수)
	add3(2, 3, 4);			// 2 + 3+ 4
	printf("\n");
	add3(1, 2, 3);			// 1 + 2 + 3
	printf("\n");

	// 숫자 2개를 입력받아 합치고 + 1을 해주는 기능
	SumNone(1, 1);
	SumNone(2, 4);

	printf("\n\n");

	DivNotzero(10, 2);
	DivNotzero(10, 0);
	DivNotzero(4, 2);
}