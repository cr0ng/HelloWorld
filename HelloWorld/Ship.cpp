#include "Ship.h"
#include <stdlib.h>

void Ship::RandomShipPosition()
{
	int ShipArray[10][10];

	for (int s = 5; s > 1; s--) {
		int ShipX = rand() % 10;
		int ShipY = rand() % 10;
		int WidthOrLength = rand() % 2;	// 0�̸� ���� 1�̸� ����

		if (WidthOrLength == 0) 
		{ 
			// �Լ��� ���η�
		
			for (int i = ShipX; i < ShipX+s; i++) {
				if ((ShipArray[i][ShipY] == 'X') || i > 10)
				{
					// �ߺ��� ��ġ�� �Լ��� ���� or ���� ���
					// ��ǥ �� ���� �̱�
					int ShipX = rand() % 10;
					int ShipY = rand() % 10;
				}
				else {
					ShipArray[i][ShipY] = 'X';
				}
			}
		}
		else 
		{
			// �Լ��� ���η�
			for (int i = ShipX; i < ShipX + s; i++) {
				if ((ShipArray[ShipX][i] == 'X') || i > 10)
				{
					// �ߺ��� ��ġ�� �Լ��� ���� or ���� ���
					// ��ǥ �� ���� �̱�
					int ShipX = rand() % 10;
					int ShipY = rand() % 10;
				}
				else {
					ShipArray[ShipX][i] = 'X';
				}
			}
		}
	}
	
}
