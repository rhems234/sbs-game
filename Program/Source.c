﻿#include <stdio.h>

void main()
{
	#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문입니다.

	#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자입니다.

	// 전위 증감 연산자는 변수의 값을 증감시킨 후에 연산을 수행합니다.
	/*int previouseX = 0;
	int x = 0;

	x = ++previouseX;

	printf("previouseX 변수를 전위 증가한 값 : %d\n", previouseX);
	printf("x 변수를 전위 증가한 값 %d\n", x);

	x = --previouseX;

	printf("previouseX 변수를 전위 감소한 값 : %d\n", previouseX);
	printf("x 변수를 전위 감소한 값 %d\n", x);*/

	// 후위 증감 연산자는 연산을 수행한 다음 변수의 값을 증감시킵니다.
	/*int previouseY = 0;
	int y = 0;

	y = previouseY++;

	printf("previouseY 변수를 후위 증가한 값 : %d\n", previouseY);
	printf("y 변수를 후위 증가한 값 %d\n", y);

	y = previouseY--;

	printf("previouseY 변수를 후위 감소한 값 : %d\n", previouseY);
	printf("y 변수를 후위 감소한 값 %d\n", y);*/

	#pragma endregion

	#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문입니다.

	/*for (int i = 0; i < 27; i++) {
		printf("%d -> UP \n", i);
	}*/

	#pragma endregion

	#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문입니다.

	// while문의 경우 위에서 아래로 실행되며, 아래에 있는 명령문의 실행이 다 끝나면
	// 다시 위에 있는 명령문으로 돌아가서 반복하는 구조입니다.

	/*int count = 5;
	while (count > 0) {
		printf("count 값 : %d\n", count);
		count--;
	}*/

	#pragma endregion

	#pragma region do-while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문 입니다.

	/*int life = 0;
	do {
		printf("반복 테스트");
	} while (life != 0);*/
	#pragma endregion

	#pragma region continue문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문입니다.
	// 과제 : 1에서 10까지 출력하되 3의 배수만 출력되지 않도록 
	/*for (int i = 1; i <= 20; i++) {

		if (i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}*/

	#pragma endregion

	#pragma endregion

}
