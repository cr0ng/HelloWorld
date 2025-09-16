#include "HW0913.h"
#include <stdio.h>
#include <iostream>

void HW0913_1()
{
	int Year=0, Month=0, Day=0;
	printf("��¥�� �Է��ϼ��� ");
	std::cin >> Year >> Month >> Day;
	
	// �� ���� ��¥���� �迭�� �����ϱ�
	int MonthPerDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int AllDay = 0, YearDay=0 , MonthDay= 0;
	int CountLeapYear = 0;

	//����(366��)�̾��� ��
	for (int i = 1; i < Year; i++) {
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) {
			CountLeapYear++;
		}
	}

	//�⵵ * 365
	YearDay = (Year - 1) * 365 + CountLeapYear;

	for (int j = 1; j < Month; j++) {
		if (((Year % 4 == 0) && (Year % 100 != 0) || (Year % 400 == 0))&& (j==2)) { // ������ 2���̸� +1
			MonthDay += 1;
		}
		MonthDay += MonthPerDay[j - 1];
	}

	AllDay = YearDay + MonthDay + Day;  //1�� 1�� 1��(������)�� �������� �Է��� ��¥���� ��ĥ�� �������� ���

	printf("�� %d��\n", AllDay);

	int Whatday = ((AllDay-1) % 7); // 1�Ϻ��� �����ϴϱ� 1 ����
	switch (Whatday) {
	case 0:
		printf("��");
		break;
	case 1:
		printf("ȭ");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("��");
		break;
	case 5:
		printf("��");
		break;
	case 6:
		printf("��");
		break;
	default:
		break;
	}
}

// ������ �ڵ�
// �� ���� ��¥
const int DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

// ����
const char* Week[7] = { "������", "ȭ����", "������", "�����", "�ݿ���", "�����", "�Ͽ���" };

const char* GetDayOfWeek(int Year, int Month, int Day)
{
	int Days = GetTotalDays(Year, Month, Day);
	return Week[Days % 7];
}

bool IsLeap(int Year)
{
	// 4�� ����� �����̴�. �׸��� 100�� ����� ������ �ƴϴ�.
	// �׷��� 400�� ����� �����̴�.
	// (Year % 4 == 0) : 4�� ����̴�. -> �����̴�.
	// (Year % 100 != 0) : 100�� ����� �ƴϴ� -> �����̴�.
	// (Year % 400 == 0) : 400�� ����̴� -> �����̴�.

	// 4�� ����̰� 100�� ����� �ƴϰų�, 400�� ����� �����̴�.
	return ((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0);
}

int GetTotalDays(int Year, int Month, int Day)
{
	int TotalDays = 0;
	for (int Y = 1; Y < Year; Y++)
	{
		TotalDays += (IsLeap(Y) ? 366 : 365);	// �����̸� 366�� �߰�, �ƴϸ� 365�� �߰�
	}
	for (int M = 1; M < Month; M++)
	{
		TotalDays += DaysInMonth[M - 1];
		if (M == 2 && IsLeap(Year))
		{
			TotalDays += 1;	// �����̸� 2���� �� �Ϸ� �߰�
		}
	}
	TotalDays += (Day - 1);

	return TotalDays;
}
//const int MaxHand = 12;
//void HW0913_2()
//{
//	// ���� �� �ִ� �ִ��� ī�� ���� 12 ( 1 * 4 + 2 * 4 + 3 * 4)
//	
//
//	// ���� ����
//	PlayingBlackJack();
//
//	// �÷��̾� 2���� ����, ������ 1�常 ����, ������ ??
//
//	// �÷��̾� ������ (Hit �̸� �� �� �� �ޱ�, Stand�̸� ����)
//
//	// �÷��̾��� ī�� ���� 21�� �ʰ��ϸ� ����Ʈ (�й�)
//
//	// ���� �� ����� ī�� ����
//
//	// ī�� ���� 17 �̻��� �� �� ���� ī�� �̱� (A�� 1 �Ǵ� 11)
//
//	// ���� ī�� ���� 21 �ʰ��ϸ� ����Ʈ (�й�)
//
//	// �� �� ����Ʈ�� �ƴ� ���, �÷��̾�� ������ ī�� �� ��
//
//}
//void PlayingBlackJack()
//{
//	Card Deck[52];
//	int DeckNumber = 0;
//	// ��ü ī�尡 ����ִ� �迭 (��� 4���� * ���� 13��)
//	TrumpCardSets(Deck);
//	// ��ü ī�带 ����
//	ShuffleTrumpDeck(Deck);
//	
//	// �÷��̾�� ���� ī�� 2�徿 �̱�
//	Card DealerPick[MaxHand];
//	int DealerCount = 0;
//
//	Card PlayerPick[MaxHand];
//	int PlayerCount = 0;
//
//	AddCard(PlayerPick, PlayerCount, GiveCard(Deck, DeckNumber));
//	AddCard(PlayerPick, PlayerCount, GiveCard(Deck, DeckNumber));
//	AddCard(DealerPick, DealerCount, GiveCard(Deck, DeckNumber));
//	AddCard(DealerPick, DealerCount, GiveCard(Deck, DeckNumber));
//
//
//
//
//}
//
//
//
//
//
//void TrumpCardSets(Card* Deck)
//{
//	const char ShapeSet[4] = { 'S','H','D','C' };
//	int Index = 0;
//	for (int Value = 0; Value < 13; Value++)
//	{
//		for (int Shape = 0; Shape < 4; Shape++)
//		{
//			Deck[Index].Value = Value + 1;
//			Deck[Index].Shape = ShapeSet[Shape];
//			Index++;
//		}
//	}
//
//}
//
//void ShuffleTrumpDeck(Card* Deck)
//{
//	for (int i = 51; i > 0; i--)
//	{
//		int j = rand() % (i + 1);
//		Card Temp = Deck[i];
//		Deck[i] = Deck[j];
//		Deck[j] = Temp;
//	}
//}
//
//// ī�� �߰��ϱ�
//void AddCard(Card* InHand, int& InCount, const Card& InCard)
//{
//	if (InCount < MaxHand)
//	{
//		InHand[InCount] = InCard;
//		InCount++;
//	}
//}
//
//// ī�� �� �� �̴� ����
//const Card& GiveCard(Card* InDeck, int& InTop)
//{
//	if (InTop >= 52)
//	{
//		ShuffleTrumpDeck(InDeck);
//		InTop = 0;
//	}
//	return InDeck[InTop++];
//}