#include <stdio.h>

void initialize()
{

	printf("initialize...\n");

}

float get_temperature() {
	return 36.5f;
}

void update(int x, int y) {
	
	printf("x = %d, y = %d\n", x, y);
}

void print_status(char grade, int height, float temperature) {

	printf("등급 : %c\n", grade);
	printf("키 : %d\n", height);
	printf("체온 : %.2f\n", temperature);

}

void main()
{
#pragma region 네이밍 컨벤션

	// 1. 카멜 표기법 - 첫 번째 단어를 소문자로 시작
	//					그 다음 있는 단어들은 대문자로 시작
	// 2. 파스칼 표기법 (함수, 클래스) - 첫번째 단어를 대문자로 시작
	//
	// 3. 스네이크 표기법 - 소문자 + 언더스코어

#pragma endregion

#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해 
	// 독립적으로 설계된 코드의 집합입니다.
	//initialize();

#pragma endregion

#pragma region 반환형
	// 함수가 실행을 끝내고 돌려주는 결과의 자료형입니다.

	// 함수의 경우 자료형과 반환하는 값의 형태가 일치하지 않으면
	// 원하는 값을 얻을 수 없습니다.

	// printf("온도 : %.2f\n", get_temperature());

#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수입니다.
	int num = 33;
	int num2 = 11;

	update(num, num2);

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 해제됩니다.

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께
	// 정의할 수 있으며, 여러 개의 매개 변수를 생성할 수 있습니다.

	print_status('A', 170, 36.5f);
#pragma endregion

}
