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
    // �� ��ȣ ��� (���� ��ȣ)
    printf("   "); // ���� �� �𼭸� ����
    for (int col = 0; col < 10; col++) {
        printf("%2d", col);
    }
    printf("\n");

    // �� ���
    for (int row = 0; row < 10; row++) {
        printf("%2d ", row); // �� ��ȣ ��� (���� ��ȣ)
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
	// �Է��� ��ǥ�� �迭�� ���ؼ� �Լ��� ������ Map���� O, Miss ���, ������ Map���� X, Hit�� ���
	 
	}

void HW0920::AttackResult()
{
}

void HW0920::GameOveR()
{
}
