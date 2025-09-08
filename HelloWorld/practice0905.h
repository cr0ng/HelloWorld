#pragma once

//Ư�� �������� ������ ���� �����ϴ� �Լ�
int Practice0905_01(int Min, int Max);

//����� ���̸� �Է��� �ּ���
int Practice0905_02(int Age);

// ���� �������� �Է� �ް� ���� ���ϱ�
float Practice0905_03(float Radius);

//���ڸ� �Է¹޾� Ȧ������ ¦������ �Ǵ��ϴ� �Լ�
bool OddOrNot(int Number);

//���� �з� �Լ�(A ~ F)
int ScoreRanking(int Score);

//������ ����, ������ ����, ������ ��ۿ� �Լ� �� 3��
int GetItem(int Inventory, int Item);
int LoseItem(int Inventory, int Item);
int Toggle2Item(int Inventory, int Item);

// �Ǹ����� �׸���
int DrawPyramid(int Floor);

// Min
template <typename T> 
T MinNum(T Number1, T Number2 ){
	if (Number1 > Number2) {
		return Number2;
	}
	else {
		return Number1;
	}
}

// Max
template <typename T>
T MaxNum(T Number1, T Number2) {
	if (Number1 < Number2) {
		return Number2;
	}
	else {
		return Number1;
	}
}

// Clamp
template <typename T>
T Clamp(T Value, T Min, T Max) {
	if (Value < Min) {
		return Min;
	}
	else if (Value > Max) {
		return Max;
	}
	else {
		return Value;
	}
	return 0;
}

// ����Լ��� ���丮�� ���ϱ�
int FactorialNumber(int Number);

void Practice0905_02_05();