﻿#include <stdio.h>

void main()
{
	#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리 공간은 1 byte의 크기로 나누어 표현합니다.
	/*int data = 10;
	printf("data주소 : %p\n", &data);*/
	#pragma endregion

	#pragma region scanf_s 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수입니다.
	//int x = 0;
	//printf("x의 값을 입력해주세요 : ");

	//// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈 수 없습니다.

	//scanf_s("%d", &x);

	//// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	//// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.

	//printf("x 변수의 값 : %d\n", x);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에
	// 데이터를 보관하였다가 입력하는 순간 버퍼 안의
	// 내용을 프로그램에 전송합니다.

	#pragma endregion

	#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.
	//int storage = 10;
	//int variable = 20;
	//int* pointer = &storage;

	//// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
	//// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다.
	//printf("storage 변수의 주소 : %p\n", &storage);
	//printf("pointer 변수의 값 : %p\n", pointer);
	//printf("pointer 변수의 주소 : %p\n\n", &pointer);

	//*pointer = 99;
	//printf("storage 변수의 값 : %d\n", storage);
	//printf("pointer 변수가 가리키는 값 : %d\n\n", *pointer);

	//pointer = &variable;

	//*pointer = 100;

	//printf("variable 변수의 값 : %d\n", variable);
	//printf("pointer의 값 : %p\n", pointer);
	//printf("pointer 변수가 가리키는 값 : %d\n\n", *pointer);

	//// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	//// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의
	//// 시작 주소를 가리키게 됩니다.

	//printf("int 자료형의 크기 : %u\n", sizeof(int));

	//printf("pointer 자료형의 크기 : %u\n", sizeof(pointer));

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로 정해지며,
	// 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.

	#pragma endregion

	#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터입니다.
	//void* reference = NULL;

	//char ch = 'A';
	//int num = 10;
	//float fl = 3.14f;

	//reference = &ch;

	//// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없습니다.
	//*(char*)reference = 'B';

	//printf("ch의 값 : %c\n", ch);
	//printf("reference의 값 : %c\n\n", *(char*)reference);

	//reference = &num;

	//*(int*)reference = 50;

	//printf("num의 값 : %d\n", num);
	//printf("reference의 값 : %d\n\n", *(int*)reference);

	//reference = &fl;

	//*(float*)reference = 45.5f;
	//printf("fl의 값 : %.2f\n", fl);
	//printf("reference의 값 : %.2f\n\n", *(float*)reference);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는 변수의 자료형으로 형 변환해주어야 합니다.
	#pragma endregion

	#pragma region 상수 지시 포인터
	// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록
	// 지정되어 있는 포인터입니다.

	/* const int* num1 = NULL;

	int room1 = 10;
	int room2 = 20;

	num1 = &room1;

	printf("room1의 주소값 %p\n", &room1);
	printf("const int 주소값 : %p\n", num1);

	num1 = &room2;

	printf("room2의 주소값 %p\n", &room2);
	printf("const int 주소값 : %p\n", num1); */

	#pragma endregion

	#pragma region 포인터 상수
	// 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없는 포인터 입니다.

	int num1 = 99;
	int num2 = 555;

	int* const num_pointer = &num1;

	*num_pointer = 125;

	printf("num_pointer의 변수 값 : %d\n", *num_pointer);
	printf("num_pointer의 주소 값 : %p\n", &num_pointer);

	#pragma endregion



}
