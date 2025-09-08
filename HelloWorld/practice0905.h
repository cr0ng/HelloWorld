#pragma once

//특정 범위안의 랜덤한 수를 리턴하는 함수
int Practice0905_01(int Min, int Max);

//당신의 나이를 입력해 주세요
int Practice0905_02(int Age);

// 원의 반지름을 입력 받고 넓이 구하기
float Practice0905_03(float Radius);

//숫자를 입력받아 홀수인지 짝수인지 판단하는 함수
bool OddOrNot(int Number);

//성적 분류 함수(A ~ F)
int ScoreRanking(int Score);

//아이템 설정, 아이템 해제, 아이템 토글용 함수 총 3개
int GetItem(int Inventory, int Item);
int LoseItem(int Inventory, int Item);
int Toggle2Item(int Inventory, int Item);

// 피마리드 그리기
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

// 재귀함수로 팩토리얼 구하기
int FactorialNumber(int Number);

void Practice0905_02_05();