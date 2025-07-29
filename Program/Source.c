#include <stdio.h>

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

	int array[] = { 10,20,30,40,50 };
	// 배열 크기 = 배열 전체 크기 / 요소 하나의 크기
	int size = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < size; i++) {
		printf("array[%d]의 값 : %d\n", i, array[i]);
	}

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	printf("배열의 시작 주소 : %p\n", array);

	int* arr_pointer = &array[0] + 1;

	*arr_pointer = 25;

	printf("pointer로 array[1] 역참조 : %d\n", array[1]);

	for (int i = 0; i < size; i++) {
		printf("array[%d] : %d\n",i, array[i]);
	}

	// 배열은 연속적인 메모리 공간을 가지고 있으며, 배열의 이름은
	// 배열의 시작 주소를 가리킵니다.

#pragma endregion

}
