#pragma once

// Practice1
float Avg3Number(int Number1, int Number2, int Number3);

// Practice2
int SalePrice(int Price, int Sale);

// Practice3
int ThrowDice();

// Practice4
int ScoreGrade(int Score);

// Practice5
template <typename T>
T ClampHW(T Value, T Value2, T Value3) {
	if (Value2 < Value3) { // Value2°¡ min, Value2°¡ max
		if (Value < Value2) {
			return Value2;
		}
		else if (Value < Value3) {
			return Value;
		}
		else if (Value > Value3) {
			return Value3;
		}
	}
};

// Deep Practice1
int SumEachDigit(int InputNumber);

// Deep Practice2
int RecurciveDecimalToBinary(int Decimal);

// Deep Practice3
int SlotGame(int Funds, int BattingMoney);

// Deep Practice4
int TurnBattle();

// Deep Practice5
int PickCard();
int MixCard();
int PickJocker(int SelectCard, int JokerLocation, int BattingMoney, int Funds);