#include <stdio.h>

void main()
{
#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ���� ������
	// �����ϵ��� �����ϴ� ��ɹ��Դϴ�.

	#pragma region ���� ������
		// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶�� ������
		// ��Ÿ���� �������Դϴ�.

		// ���� �����ڴ� ������ ���� �� 1�̶�� ������ ��ȯ�Ǹ�,
		// ������ Ʋ�� �� 0�̶�� ������ ��ȯ�˴ϴ�.

	/*int X = 10;
	int Y = 20;
	printf("true or false < : %d\n", X < Y);
	printf("true or false > : %d\n", X > Y);
	printf("true or false <= : %d\n", X <= Y);
	printf("true or false >= : %d\n", X >= Y);
	printf("true or false != : %d\n", X != Y);
	printf("true or false == : %d\n", X == Y);*/
	#pragma endregion

	#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ��ɹ��Դϴ�.
		
	// if���� ������ 1�� �� ����Ǹ�, 0�� �� ������� �ʽ��ϴ�.
	/*int health = 0;
	if (health <= 0) {
		printf("Destroy");
	}*/
	#pragma endregion

	#pragma region else if��
	// if���� ������ Ʋ�� �� else if���� ������ �´ٸ� ����Ǵ� ��ɹ��Դϴ�.
	
	// else if���� ���� �� ������ �� ������, if���� ������ �� ����� �� �ֽ��ϴ�.
	/*int level = 99;

	if(level >= 99) {
		printf("�ִ� ������ �޼��Ͽ����ϴ�.\n");
	} else if(level < 99){
		printf("������ �����մϴ�.\n");
	}*/
	#pragma endregion

	#pragma region else��
	// if���� else if���� ������ �� Ʋ���� ����Ǵ� ��ɹ��Դϴ�.
	
	//int integer = 0;
	//
	//if (integer > 0) { 	// ���
	//	printf("integer�� ���� %d�̹Ƿ� ��� �Դϴ�.\n", integer);
	//}
	//else if (integer < 0) { // ����
	//	printf("integer�� ���� %d�̹Ƿ� ���� �Դϴ�.\n", integer);
	//}
	//else { 
	//	printf("integer�� ���� %d�̹Ƿ� 0 �Դϴ�.\n", integer);
	//}


	// if���� ����� ��� ���ǹ��� ������ ���� �� ���� ���� �ִ� ���ǹ��� ����˴ϴ�.
	#pragma endregion

	#pragma region switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.

	char grade = 'X';

	// switch���� �ش� ������ �Ϸ�Ǿ��� ��, break���� ������
	// ������ �ؿ� �ִ� case������ ��� �����Ű�ٰ� �����մϴ�.

	switch (grade) {
		case 'A' : 
			printf("100�� ~ 90���Դϴ�.\n");
			break;
		case 'B':
			printf("89�� ~ 80���Դϴ�.\n");
			break;
		case 'C':
			printf("79�� ~ 70���Դϴ�.\n");
			break;
		case 'D':
			printf("69�� ~ 60���Դϴ�.\n");
			break;
		case 'F':
			printf("60�� �̸��� F�Դϴ�.");
			break;
		default: 
			printf("Exception\n");
			break;

	}

	// switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������ ��ġ�� �̵��մϴ�.
	#pragma endregion


#pragma endregion

}