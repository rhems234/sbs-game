﻿#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를 할당하는 작업입니다.
	// int* pointer = malloc(sizeof(int) * 3);

	// *pointer = 10;

	// printf("%d\n", *pointer);

	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를
	// 변경할 수 있으며, 동적으로 메모리의 크기를 할당할 때
	// 바이트 단위로 지정합니다. 

	// free(pointer);

	// 동적으로 할당된 메모리는 Heap 영역에 보관되어 있으므로,
	// 사용이 끝나면 직접 해제해주어야 합니다.

	// 숙제 : pointer -> arr배열에 10, 20, 30 삽입
	// 출력 후 메모리 해제

	/*int* pointer = malloc(sizeof(int) * 3);

	pointer[0] = 10;
	pointer[1] = 20;
	pointer[2] = 30;

	for (int i = 0; i < 3; i++) {
		printf("배열 출력 : %d\n", pointer[i]);
	}

	free(pointer);*/

#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.
	//int* address = malloc(4);

	//*address = 100;

	//printf("메모리 할당 : %d\n", *address);

	//free(address);

	//address = NULL;

	//printf("할당 해제 : %d\n", *address);
#pragma endregion


	return 0;
}