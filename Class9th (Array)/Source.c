﻿#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.
	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.

	//int list[5] = { 11, 12, 13, 14 ,15 };

	//int arr[5];

	//for (int i = 0; i < 5; i++) {
	//	arr[i] = (i + 1) * 10;

	//	printf("list[%d] = %d\n", i, list[i]);
	//	printf("arr[%d] = %d\n", i, arr[i]);
	//}

	// 배열의 메모리 공간은 프로그램이 실행되는 동안 변경할 수 없습니다.

	//int array[] = { 10,20,30,40,50 };
	//// 배열 크기 = 배열 전체 크기 / 요소 하나의 크기
	//int size = sizeof(array) / sizeof(array[0]);

	//for (int i = 0; i < size; i++) {
	//	printf("array[%d]의 값 : %d\n", i, array[i]);
	//}

	//// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	//// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	//printf("배열의 시작 주소 : %p\n", array);

	//int* arr_pointer = array;

	//arr_pointer += 1;

	//*arr_pointer = 25;

	//printf("pointer로 array[1] 역참조 : %d\n", array[1]);

	//for (int i = 0; i < size; i++) {
	//	printf("array[%d] : %d\n",i, array[i]);
	//}

	// 배열은 연속적인 메모리 공간을 가지고 있으며, 배열의 이름은
	// 배열의 시작 주소를 가리킵니다.
#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

	//const char* message = "packet";
	//char title[] = { "League of Legend" };

	//// *message = 'e';

	//printf("message 문자열 : %s\n", message);
	////printf("message 주소값 : %p\n", &message);
	//printf("message[3]의 값 : %c\n\n", message[3]);
	//
	//message = "bit";

	//// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며, 
	//// 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에 
	//// 문자열의 값을 변경할 수 없습니다.

	//printf("message의 값 : %p\n", message);
	//printf("message 문자열 : %s\n\n", message);

	//// 문자열은 공백도 함께 메모리 공간에 포함되며, 마지막 메모리
	//// 공간의 요소에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.

	//printf("title의 값 : %s\n", title);

	//title[6] = '\0';
	//printf("title : %s\n",title);

	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만,
	// 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 출력됩니다.

#pragma endregion

#pragma region (2)차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	/*int array2D[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("array2D[%d][%d] = %d\n", i, j, array2D[i][j]);
		}
	}*/

	// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은
	// 열을 의미하고, 뒤에 있는 배열은 행을 의미합니다.

#pragma endregion

#pragma region 아스키 코드
	// 미국 국립 표준 협회에서 표준화한 정보 교환용 7 bit 부호 체계입니다.
	//char alphabet = 'A';
	//printf("alphabet 변수의 값 : %d\n\n", alphabet);

	//// A ~ Z 까지 출력

	//for (int i = 'A' ; i <= 'Z'; i++) {
	//	printf("%c ", i);
	//}

#pragma endregion
}
