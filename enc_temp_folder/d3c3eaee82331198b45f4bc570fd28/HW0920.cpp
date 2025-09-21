#include "HW0920.h"
#include "Ship.h"
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <iostream>

int GameTurn = 50;
int LeftEnemyShip = 4;
int Map[10][10] = {};
int AttackX = 0, AttackY = 0;
Ship ship;
char BattleMap[10][10]; // . ���δ� �ʱ�ȭ�� �ȵǳ� // �������� ȭ�� �迭
char ShipMap[10][10]; // �Լ��� �������� ���ִ� �迭

void HW0920::BattleShip()
{
    

	srand(time(0));

	StartBattleShip();
    ship.RandomShipPosition(ShipMap);
    //while (GameTurn > 0) {
        DrawBattleMap();
    //}

}

void HW0920::StartBattleShip()
{
	printf("Battle Ship game started! Sink all enemy ships within %d turns.\n", GameTurn);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            BattleMap[i][j] = '.';
        }
    }
}


void HW0920::DrawBattleMap()
{

    printf("  ");
    for (int k = 0; k < 10; k++) {
        printf("%d ", k);
    }
    printf("\n");
    for (int q = 0; q < 10; q++) {
        printf("%d ", q);
        for (int r = 0; r < 10; r++) {
            printf("%c ", BattleMap[q][r]);
        }
        printf("\n");
    }


    printf("  ");
    for (int k = 0; k < 10; k++) {
        printf("%d ", k);
    }
    printf("\n");
    for (int q = 0; q < 10; q++) {
        printf("%d ", q);
        for (int r = 0; r < 10; r++) {
            printf("%c ", ShipMap[q][r]);
        }
        printf("\n");
    }

    printf("Turn Left: %d\n", GameTurn);
    printf("Enemy ships remaining: %d\n", LeftEnemyShip);
    printf("Enter attack coordinates (x y) : ");
    std::cin >> AttackX >> AttackY;
    PlayerAttack(AttackX, AttackY);


   while (GameTurn > 0) {
    DrawBattleMap();
    printf("Turn Left: %d\n", GameTurn);
    printf("Enemy ships remaining: %d\n", LeftEnemyShip);
    printf("Enter attack coordinates (x y) : ");
    std::cin >> AttackX >> AttackY;
        PlayerAttack(AttackX, AttackY);
    }
    


}

void HW0920::PlayerAttack(int X, int Y)
{
	// �Է��� ��ǥ�� �迭�� ���ؼ� �Լ��� ������ Map���� X, Miss ���, ������ Map���� O, Hit�� ���
    if (ShipMap[X][Y] == 'S') {
        //����
        BattleMap[X][Y] = 'O'; // �� �ݿ��� �ȵ���
        printf("Hit..!\n");
    }
    else {
        BattleMap[X][Y] = 'X';
        printf("Miss...\n");

    }
    printf("\n");
    GameTurn--;
	}

void HW0920::AttackResult()
{
    
}

void HW0920::GameOveR()
{
}
