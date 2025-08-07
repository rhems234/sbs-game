#include <stdio.h>
#include <math.h>

struct Data {
    char grade;
    int health;
    double experience;
};

struct enemy
{
    int x;
    int y;
};

struct player
{
    int x;
    int y;
};

struct class {
    char garde;
    double experience;
    int health;
};

struct Node {
    int data;
    struct Node1* next;
};

struct currentNode
{
    int data; 
    struct currentNode* next;
};

int main()
{
#pragma region 구조체
    // 여러 개의 변수를 하나의 집합으로 구조화한 다음
    // 하나의 객체를 생성하는 것입니다.

    // 구조체를 선언하기 전에 구조체는 메모리 공간이
    // 생성되지 않으므로, 구조체 내부에 있는 데이터를
    // 초기화 할 수 없습니다.

    //struct Data data = {'B', 50, 75.625};

    // 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화됩니다.
    // 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 대응됩니다.

   /* printf("data.text : %c\n", data.text);
    printf("data.num : %d\n", data.num);
    printf("data.flt : %.2f\n", data.flt);
    
    data.text = 'J';
    data.num = 10;
    data.flt = 3.14;

    printf("data.text : %c\n", data.text);
    printf("data.num : %d\n", data.num);
    printf("data.flt : %.2f\n", data.flt);*/
    

#pragma endregion

#pragma region 두 점 사이의 거리
    // enemy(5, 7), player(1, 1), double distance 변수 생성
    // 거리가 5.0 이하일 경우 공격 상태 ( Attack )
    // 거리가 5.0 이상일 경우 대기 상태 ( Idle )
    // 제곱근 : sqrt(49) -> 7
    // 제곱 : pow(5, 2) -> 25

   /* int player_x = 0;
    int player_y = 0;
    int enemy_x = 0;
    int enemy_y = 0;

    printf("유닛 xy축 지정 : ");
    scanf_s("%d %d", &enemy_x, &enemy_y);

    printf("플레이어 xy축 지정 : ");
    scanf_s("%d %d", &player_x, &player_y);

    struct enemy enemy = { enemy_x, enemy_y };
    struct player player = { player_x, player_y };

    double distance = sqrt(pow(enemy.x - player.x, 2) + pow(enemy.y - player.y, 2));

    printf("적과의 거리 : %lf\n", distance);

    if (distance >= 5.0) {
        printf("상태 : Idle");
    }
    else if (distance <= 5.0) {
        printf("상태 : ATTACK");
    }*/

#pragma endregion
    
#pragma region 바이트 패딩
    // 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
    // 읽을 수 있도록, 컴파일러가 레지스터의 블록에
    // 맞추어 바이트를 패딩해주는 최적화 작업입니다.

    /*struct Data data = { 'A', 10, 17.5  };

    printf("Data 구조체 크기 : %u\n",sizeof(data));*/

    // 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
    // 가장 큰 자료형의 배수가 되도록 정렬합니다.

    // printf("Data 구조체 크기 : %zu\n", sizeof(struct  class));

    // 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리 크기가
    // 다르게 설정될 수 있습니다.
#pragma endregion

#pragma region 자기 참조 구조체
    
    struct Node node1 = { 10, NULL };
    struct Node node2 = { 20, NULL };
    struct Node node3 = { 30, NULL };

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    struct Node* currentNode = &node1;

    while (currentNode != NULL) {
        printf("Data : %d\n", currentNode -> data);
        currentNode = currentNode->next;
    }


#pragma endregion


	return 0;
}