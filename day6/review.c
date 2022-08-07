#include <stdio.h>

// 함수 : 개발자가 직접 만드는 기능
// 연산자 : 프로그래밍 언어가 지원해주는 기능

// 함수
// 자료형 함수명(){}

// 전달받은 값을 각각 절댓값으로 만들어서 더하는 기능
void AbsPlus(int num1, int num2) {			// 정수 2개를 전달받는 함수
	int num3 = 0, num4 = 0, result = 0;		// AbsPlus 안에서 만든 변수는 AbsPlus가 끝나면 없어짐(지역변수)
	if (num1 < 0) {
		num3 = num1 * (-1);			// num1이 음수면 양수로 바꿔 넣는다.
	}
	else {
		num3 = num1;			// num1이 양수면 그대로 num3에 넣는다.
	}
	if (num2 < 0) {
		num4 = num2 * (-1);			// num1이 음수면 양수로 바꿔 넣는다.
	}
	else {
		num4 = num2;			 
	}
	result = num3 + num4;
	printf("%d \n", result);
}

// 전달받은 값을 각각 절댓값(함수)으로 만들어서 빼는 기능
void AbsMinus(int num1, int num2) {			// 정수 2개를 전달받는 함수
	if (num1 <  0) {
		num1 = num1 * -1;
	}
	if (num2 < 0) {
		num2 = num2 * -1;
	}
	int result = num1 - num2;
	printf("%d \n", result);
}

// 숫자 3개를 더하는 함수 (함수정의)
void Plus3(int n1, int n2, int n3 ) {
	int result = n1 + n2 + n3;
	printf("%d \n", result);
}

int main0() {
	// 프로젝트를 실행하면 main()함수를 실행한다.
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