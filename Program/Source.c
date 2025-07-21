#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

	#pragma region 관계 연산자
		// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는 값으로
		// 나타내는 연산자입니다.

		// 관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
		// 조건이 틀릴 때 0이라는 값으로 반환됩니다.

	/*int X = 10;
	int Y = 20;
	printf("true or false < : %d\n", X < Y);
	printf("true or false > : %d\n", X > Y);
	printf("true or false <= : %d\n", X <= Y);
	printf("true or false >= : %d\n", X >= Y);
	printf("true or false != : %d\n", X != Y);
	printf("true or false == : %d\n", X == Y);*/
	#pragma endregion

	#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문입니다.
		
	// if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.
	/*int health = 0;
	if (health <= 0) {
		printf("Destroy");
	}*/
	#pragma endregion

	#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이 맞다면 실행되는 명령문입니다.
	
	// else if문은 여러 번 정의할 수 있으며, if문이 존재할 때 사용할 수 있습니다.
	/*int level = 99;

	if(level >= 99) {
		printf("최대 레벨을 달성하였습니다.\n");
	} else if(level < 99){
		printf("레벨이 부족합니다.\n");
	}*/
	#pragma endregion

	#pragma region else문
	// if문과 else if문의 조건이 다 틀리면 실행되는 명령문입니다.
	
	//int integer = 0;
	//
	//if (integer > 0) { 	// 양수
	//	printf("integer의 값은 %d이므로 양수 입니다.\n", integer);
	//}
	//else if (integer < 0) { // 음수
	//	printf("integer의 값은 %d이므로 음수 입니다.\n", integer);
	//}
	//else { 
	//	printf("integer의 값은 %d이므로 0 입니다.\n", integer);
	//}


	// if문에 연결된 모든 조건문의 조건이 맞을 때 가장 위에 있는 조건문만 실행됩니다.
	#pragma endregion

	#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	char grade = 'X';

	// switch문은 해당 조건이 완료되었을 때, break문이 없으면
	// 나머지 밑에 있는 case문까지 계속 실행시키다가 종료합니다.

	switch (grade) {
		case 'A' : 
			printf("100점 ~ 90점입니다.\n");
			break;
		case 'B':
			printf("89점 ~ 80점입니다.\n");
			break;
		case 'C':
			printf("79점 ~ 70점입니다.\n");
			break;
		case 'D':
			printf("69점 ~ 60점입니다.\n");
			break;
		case 'F':
			printf("60점 미만은 F입니다.");
			break;
		default: 
			printf("Exception\n");
			break;

	}

	// switch문의 경우 조건에 해당하는 값에 따라 조건의 위치로 이동합니다.
	#pragma endregion


#pragma endregion

}