#pragma once

/// <summary>
/// ���� ���ϱ�
/// </summary>
void HW0913_1();

//������ �ڵ�


/// <summary>
/// ��¥�� �Է��ϸ� ������ �˷��ִ� �Լ�
/// </summary>
/// <param name="Year">���</param>
/// <param name="Month">���</param>
/// <param name="Day">��ĥ</param>
/// <returns>�ش� ���� ���ڿ�</returns>
const char* GetDayOfWeek(int Year, int Month, int Day);

/// <summary>
/// ���� �Ǻ� �Լ�
/// </summary>
/// <param name="Year">Ȯ���� ����</param>
/// <returns>�����̸� true, �ƴϸ� false</returns>
bool IsLeap(int Year);

/// <summary>
/// 1�� 1�� 1�Ͽ��� ��ĥ�� �������� ����ϴ� �Լ�
/// </summary>
/// <param name="Year">���</param>
/// <param name="Month">���</param>
/// <param name="Day">��ĥ</param>
/// <returns>��ü �ϼ�</returns>
int GetTotalDays(int Year, int Month, int Day);

///// <summary>
///// ���� ���� �����
///// </summary>
//void HW0913_2();
//
///// <summary>
///// ī�� ��°�� �������� 
///// </summary>
//void TrumpCardSets(Card* InDeck);
//
//
///// <summary>
///// ���� ���� �����ϱ�
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
///// ī�� ���� �̱� 
///// </summary>
///// <param name="InDeck"></param>
///// <param name="InTop"></param>
///// <returns></returns>
//const Card& GiveCard(Card* InDeck, int& InTop);