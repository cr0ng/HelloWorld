#include "HW0913.h"
#include <stdio.h>
#include <iostream>

void HW0913_1()
{
	int Year=0, Month=0, Day=0;
	printf("날짜를 입력하세요 ");
	std::cin >> Year >> Month >> Day;
	
	// 각 월당 날짜수를 배열로 저장하기
	int MonthPerDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int AllDay = 0, YearDay=0 , MonthDay= 0;
	int CountLeapYear = 0;

	//윤년(366일)이었던 해
	for (int i = 1; i < Year; i++) {
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) {
			CountLeapYear++;
		}
	}

	//년도 * 365
	YearDay = (Year - 1) * 365 + CountLeapYear;

	for (int j = 1; j < Month; j++) {
		if (((Year % 4 == 0) && (Year % 100 != 0) || (Year % 400 == 0))&& (j==2)) { // 윤년인 2월이면 +1
			MonthDay += 1;
		}
		MonthDay += MonthPerDay[j - 1];
	}

	AllDay = YearDay + MonthDay + Day;  //1년 1월 1일(월요일)을 기준으로 입력한 날짜까지 며칠이 지났는지 계산

	printf("총 %d일\n", AllDay);

	int Whatday = ((AllDay-1) % 7); // 1일부터 시작하니까 1 빼기
	switch (Whatday) {
	case 0:
		printf("월");
		break;
	case 1:
		printf("화");
		break;
	case 2:
		printf("수");
		break;
	case 3:
		printf("목");
		break;
	case 4:
		printf("금");
		break;
	case 5:
		printf("토");
		break;
	case 6:
		printf("일");
		break;
	default:
		break;
	}
}

// 선생님 코드
// 각 월별 날짜
const int DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

// 요일
const char* Week[7] = { "월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일" };

const char* GetDayOfWeek(int Year, int Month, int Day)
{
	int Days = GetTotalDays(Year, Month, Day);
	return Week[Days % 7];
}

bool IsLeap(int Year)
{
	// 4의 배수는 윤년이다. 그리고 100의 배수는 윤년이 아니다.
	// 그런데 400의 배수는 윤년이다.
	// (Year % 4 == 0) : 4의 배수이다. -> 윤년이다.
	// (Year % 100 != 0) : 100의 배수가 아니다 -> 윤년이다.
	// (Year % 400 == 0) : 400의 배수이다 -> 윤년이다.

	// 4의 배수이고 100의 배수가 아니거나, 400의 배수면 윤년이다.
	return ((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0);
}

int GetTotalDays(int Year, int Month, int Day)
{
	int TotalDays = 0;
	for (int Y = 1; Y < Year; Y++)
	{
		TotalDays += (IsLeap(Y) ? 366 : 365);	// 윤년이면 366일 추가, 아니면 365일 추가
	}
	for (int M = 1; M < Month; M++)
	{
		TotalDays += DaysInMonth[M - 1];
		if (M == 2 && IsLeap(Year))
		{
			TotalDays += 1;	// 윤년이면 2월일 때 하루 추가
		}
	}
	TotalDays += (Day - 1);

	return TotalDays;
}
//const int MaxHand = 12;
//void HW0913_2()
//{
//	// 뽑을 수 있는 최대의 카드 수는 12 ( 1 * 4 + 2 * 4 + 3 * 4)
//	
//
//	// 게임 시작
//	PlayingBlackJack();
//
//	// 플레이어 2장은 공개, 딜러는 1장만 공개, 한장은 ??
//
//	// 플레이어 선택지 (Hit 이면 한 장 더 받기, Stand이면 멈춤)
//
//	// 플레이어의 카드 합이 21을 초과하면 버스트 (패배)
//
//	// 딜러 턴 비공개 카드 공개
//
//	// 카드 합이 17 이상이 될 때 까지 카드 뽑기 (A는 1 또는 11)
//
//	// 딜러 카드 합이 21 초과하면 버스트 (패배)
//
//	// 둘 다 버스트가 아닌 경우, 플레이어와 딜러의 카드 합 비교
//
//}
//void PlayingBlackJack()
//{
//	Card Deck[52];
//	int DeckNumber = 0;
//	// 전체 카드가 들어있는 배열 (모양 4가지 * 숫자 13장)
//	TrumpCardSets(Deck);
//	// 전체 카드를 섞기
//	ShuffleTrumpDeck(Deck);
//	
//	// 플레이어와 딜러 카드 2장씩 뽑기
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
//// 카드 추가하기
//void AddCard(Card* InHand, int& InCount, const Card& InCard)
//{
//	if (InCount < MaxHand)
//	{
//		InHand[InCount] = InCard;
//		InCount++;
//	}
//}
//
//// 카드 한 장 뽑는 로직
//const Card& GiveCard(Card* InDeck, int& InTop)
//{
//	if (InTop >= 52)
//	{
//		ShuffleTrumpDeck(InDeck);
//		InTop = 0;
//	}
//	return InDeck[InTop++];
//}