#pragma once
#include <string>

// ����ü�� ����� �����Ѵ�.
struct Enemy
{
	//��� ����
	std::string Name ="���";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;

	//  �⺻ ������.
	Enemy()
	{
		// ������ ���� �ƴ� ����� �ʱ�ȭ �Ǿ�� �� �� ���
		DropGold = rand() % 100 + 50;	// 50 ~ 150 �������� ������
	}

	Enemy(std::string _Name)
	{
		Name = _Name;
	}

	Enemy(float Modifier)
	{
		Health = Modifier * 10.0f;
		AttackPower = Modifier * 5.0f;
		DropGold = static_cast<int>(Modifier * 100);
	}

	Enemy(std::string _Name, float Modifier)
	{
		Name = _Name;
		Health = Modifier * 10.0f;
		AttackPower = Modifier * 5.0f;
		DropGold = static_cast<int>(Modifier * 100.0f);
	}
	
	Enemy(std::string _Name, float _Health, float _AttackPower, int _DropGold)
		: Name(_Name),Health(_Health), AttackPower(_AttackPower), DropGold(_DropGold) // ���鶧���� ���� ����ä�� ���������.
	{
		// ���⼭ ���� ���� ����� ���� ���� ���� �� ( �׷��� ����� �ʿ��� �͵��� ���ʿ�)
		//Name = _Name;
		//Health = _Health;
		//AttackPower = _AttackPower;
		//DropGold = _DropGold;

	}
	// �����ڸ� ���� ���ڴ�.
	// + �� ���׿����� (+�� ���ʰ� �������� ����ϴµ� ����Ѵ�)
	// ���� : �ڱ� �ڽ�, ������ : other
	// ��� : ���� ��
	Enemy operator + (const Enemy& other) const	//<- �������� ���� const�� �� �Լ����� �ɹ� ������ ������ �� �ϰڴٴ� �ǹ�
	{
		// �̸��� ���ʰ��� ���
		// Health�� ��ġ��
		// AttackPower�� ���ʴ� 70%tkdyd
		// DropGold�� ��ġ��
		return Enemy(
			Name +"(��ü)",
			Health + other.Health,
			AttackPower * 0.7f + other.AttackPower * 0.7f,
			DropGold + other.DropGold
		);
	}

	// ���ܽǽ� 1��
	Enemy operator - (const Enemy& other) const
	{
		return Enemy(
			Name + "(-)",
			Health - (other.Health * 0.5f),
			AttackPower - other.AttackPower * 0.5f,
			DropGold - other.DropGold * 0.5f
		);
	}

	// ���ܽǽ� 2��
	Enemy operator*(float Multiplier) const {
		return Enemy
		(
			Name + "(*" + std::to_string(Multiplier) +")",
			Health * Multiplier,
			AttackPower * Multiplier,
			DropGold * Multiplier
		);
	}
};

struct Weapon
{
	std::string Name = "����";
	std::string Desc = "���� ��� �̾߱�";
	float AttackPower = 10.0f;
	int Price = 100;


	//Weapon() // ��� �ڵ����� ����
	//{
	//}
};

struct Position
{
	int x = 0;
	int y = 0;

	Position(int _X, int _Y)
	: x(_X),y(_Y)
	{}

	Position operator + (Position& other) const
	{
		return Position(
			x + other.x,
			y + other.y
			);
	}

	Position operator - (Position& other) const
	{
		return Position(
			x - other.x,
			y - other.y
		);
	}
};

struct Player
{
	int PlayerX = 0;
	int PlayerY = 0;
	float PlayerHP = 100.0f;
	float PlayerAttack = 20.0f;
	int Money = 100;

};

struct MonsterData
{
	float MonsterHP = 100.0f;
	float MonsterAttack = 100.0f;
	int MonsterReward = 100;

	MonsterData()
	{
		MonsterHP = rand() % 100 + 50; // 50~150
		MonsterAttack = rand() % 15 + 10; // 10~25
		MonsterReward = (MonsterHP + MonsterAttack) / 5;
	}
};

void Lesson0912();

/// <summary>
/// �� ���� ����ϴ� �Լ�
/// </summary>
/// <param name="pEnemy"></param>
void PrintEnemy(const Enemy* pEnemy);

void OperatorOverloading0912();

void Practice1_0912();

//float BattleResultPlayerHP(int PlayerY, int PlayerX);
void MazeRandomMonsterBattle(Player& _Player, MonsterData& _Monster);
void MeetHealer(Player& _Player, MonsterData& _Monster);