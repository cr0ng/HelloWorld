#include "HW0920.h"
#include "Ship.h"
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <iostream>

int GameTurn = 50;
int LeftEnemyShip = 4;

void HW0920::BattleShip()
{
	srand(time(0));
	StartBattleShip();
    while (true) {
	    DrawBattleMap();

    }
}

void HW0920::StartBattleShip()
{
	printf("Battle Ship game started! Sink all enemy ships within %d turns.\n", GameTurn);
}

void HW0920::DrawBattleMap()
{
    int Map[10][10] = {};
    // 열 번호 출력 (가로 번호)
    printf("   "); // 왼쪽 위 모서리 공백
    for (int col = 0; col < 10; col++) {
        printf("%2d", col);
    }
    printf("\n");

    // 행 출력
    for (int row = 0; row < 10; row++) {
        printf("%2d ", row); // 행 번호 출력 (세로 번호)
        for (int col = 0; col < 10; col++) {
            printf(" .");
        }
        printf("\n");
    }

    int AttackX = 0, AttackY = 0;

    printf("Turn Left: %d\n", GameTurn--);
    printf("Enemy ships remaining: %d\n", LeftEnemyShip);
    printf("Enter attack coordinates (x y) : ");
    std::cin >> AttackX >> AttackY;



}

void HW0920::PlayerAttack(int X, int Y)
{
	// 입력한 좌표의 배열을 비교해서 함선이 없으면 Map에는 O, Miss 출력, 있으면 Map에는 X, Hit로 출력
	 
	}

void HW0920::AttackResult()
{
}

void HW0920::GameOveR()
{
}
