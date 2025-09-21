#include "Ship.h"
#include <stdlib.h>

//Ship::Ship() {}

void Ship::RandomShipPosition(char ShipMap[10][10])
{
	bool NothingHere = true;

	int ShipSize[4] = { 5,4,3,2 }; // �Լ� ũ���
	int ShipSizeSize = sizeof(ShipSize) / sizeof(ShipSize[0]); // �Լ� ũ��� �迭�� ũ��

	for (int Ship = 0; Ship < ShipSizeSize; Ship++) {

	
	while (NothingHere) {

		int ShipX = rand() % 10;
		int ShipY = rand() % 10;
		int WidthOrLength = rand() % 2;	// 0�̸� ���� 1�̸� ����

		if (WidthOrLength == 0)
		{
			// �Լ��� ���η�
			if (ShipX + ShipSize[Ship]-1 > 10) { // 10 �ѱ�� �ٽ� �̱�
				continue;
			}
			
			for (int s = 0; s < ShipSize[Ship]; s++) {

				if (ShipMap[ShipX][ShipY + s] == 'S') {
					continue;
				}
				ShipMap[ShipX][ShipY+s] = 'S';	// "S"�� Ÿ���� const char*�̶� �����ٰ� �Ѵ�

		
			}

			NothingHere = false;
			
		}
		else
		{
			// �Լ��� ���η�
			if (ShipY + ShipSize[Ship]-1 > 10) { // 10 �ѱ�� �ٽ� �̱�
				continue;
			}
			for (int s = 0; s < ShipSize[Ship]; s++) {
				if (ShipMap[ShipX+s][ShipY] == 'S') {
					continue;
				}
				ShipMap[ShipX+s][ShipY] = 'S';	// "S"�� Ÿ���� const char*�̶� �����ٰ� �Ѵ�
				
			
			}
			NothingHere = false;
		}
	}
	}
	}
	
	// �Լ��� ũ�� �ϳ����ۿ� ������ �ȵ�..
