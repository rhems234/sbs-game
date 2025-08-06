#include <stdio.h>
#include <math.h>

struct Data {
    char text;
    int num;
    float flt;
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

    int player_x = 0;
    int player_y = 0;
    int enemy_x = 0;
    int enemy_y = 0;

    struct enemy enemy = { scanf_s("%d %d", &enemy_x, &enemy_y) };
    struct player player = { scanf_s("%d %d", &player_x, &player_y) };

    printf("플레이어 좌표 : %d %d\n", player_x, player_y);
    printf("적 좌표 : %d %d\n", enemy_x, enemy_y);

    double distance;

    double x1 = pow(enemy.x - player.x, 2);
    double y1 = pow(enemy.y - player.y, 2);

    distance = sqrt(x1 + y1);

    printf("적과의 거리 : %lf\n", distance);

    if (distance >= 5.0) {
        printf("Idle");
    }
    else if (distance <= 5.0) {
        printf("ATTACK");
    }

#pragma endregion


	return 0;
}