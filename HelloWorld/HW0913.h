#pragma once

/// <summary>
/// 요일 구하기
/// </summary>
void HW0913_1();

//선생님 코드


/// <summary>
/// 날짜를 입력하면 요일을 알려주는 함수
/// </summary>
/// <param name="Year">몇년</param>
/// <param name="Month">몇월</param>
/// <param name="Day">며칠</param>
/// <returns>해당 요일 문자열</returns>
const char* GetDayOfWeek(int Year, int Month, int Day);

/// <summary>
/// 윤년 판별 함수
/// </summary>
/// <param name="Year">확인할 연도</param>
/// <returns>윤년이면 true, 아니면 false</returns>
bool IsLeap(int Year);

/// <summary>
/// 1년 1월 1일에서 며칠이 지났는지 계산하는 함수
/// </summary>
/// <param name="Year">몇년</param>
/// <param name="Month">몇월</param>
/// <param name="Day">며칠</param>
/// <returns>전체 일수</returns>
int GetTotalDays(int Year, int Month, int Day);

///// <summary>
///// 블랙잭 게임 만들기
///// </summary>
//void HW0913_2();
//
///// <summary>
///// 카드 통째로 가져오기 
///// </summary>
//void TrumpCardSets(Card* InDeck);
//
//
///// <summary>
///// 블랙잭 게임 시작하기
///// </summary>
//void PlayingBlackJack();
//
//struct Card
//{
//	int Value = 0;
//	char Shape = 0;
//};
//
//void ShuffleTrumpDeck(Card* InDeck);
//void AddCard(Card* InHand, int& InCount, const Card& InCard);
///// <summary>
///// 카드 한장 뽑기 
///// </summary>
///// <param name="InDeck"></param>
///// <param name="InTop"></param>
///// <returns></returns>
//const Card& GiveCard(Card* InDeck, int& InTop);