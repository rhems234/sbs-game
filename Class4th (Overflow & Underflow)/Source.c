#include <stdio.h>

void main()
{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������ �Ѿ ������ �����ϴ� ����
	// �����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�, 
	// �Ǽ��� �� �����÷ο찡 �߻��ϸ� infinity��� ������ ��µ˴ϴ�.

	/*char storage = 127 + 1;

	printf("result : %d", storage);*/
#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������ �Ѿ ������ �����ϴ� �����Դϴ�.
	// ����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�, 
	// �Ǽ��� �� ����÷ο찡 �߻��ϸ� 0�̶�� ������ ��µ˴ϴ�.
	/*char data = -128 - 1;
	printf("result : %d", data);*/
#pragma endregion

#pragma region ��ȣ ���� �ڷ���

	/*unsigned int count = 4294967295;

	printf("signed count ������ �� : %d\n", count);

	printf("unsigned count ������ �� : %u\n", count);*/
#pragma endregion

#pragma region �Ǽ��� ǥ���ϴ� ���

	//float decimal = 3.1f;
	//double x = 3.1;

	// ������ ���ͷ� ����� �����ϴ� ���� ������ ũ�� ������
	// int �ڷ������� ����Ǹ�, �Ǽ��� ���ͷ� ����� double�ڷ������� ����˴ϴ�.

	//printf("decimal ������ �� : %.7f\n", decimal);
	//printf("x ������ �� : %.15lf\n", x);

	// ǥ�� ��� �Լ��� �Ҽ��� ����� �� 4 byte ũ���� �Ǽ��� �ڷ�����
	// �Ҽ��� ���� 6�ڸ������� ǥ���ϸ�, 8 byte ũ���� �Ǽ��� �ڷ�����
	// �Ҽ��� ���� 15�ڸ������� ǥ���մϴ�.
#pragma endregion


}