#pragma once
#include <string>

// 구조체는 헤더에 선언한다.
struct Enemy
{
	//멤버 변수
	std::string Name ="고블린";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;

	//  기본 생성자.
	Enemy()
	{
		// 정해진 값이 아닌 값들로 초기화 되어야 할 때 사용
		DropGold = rand() % 100 + 50;	// 50 ~ 150 랜덤으로 생성됨
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
		: Name(_Name),Health(_Health), AttackPower(_AttackPower), DropGold(_DropGold) // 만들때부터 값이 박힌채로 만들어진다.
	{
		// 여기서 쓰는 것은 만들어 놓고 고쳐 쓰는 것 ( 그래서 계산이 필요한 것들은 이쪽에)
		//Name = _Name;
		//Health = _Health;
		//AttackPower = _AttackPower;
		//DropGold = _DropGold;

	}
	// 연산자를 새로 쓰겠다.
	// + 는 이항연산자 (+의 왼쪽과 오른쪽을 계산하는데 사용한다)
	// 왼쪽 : 자기 자신, 오른쪽 : other
	// 결과 : 리턴 값
	Enemy operator + (const Enemy& other) const	//<- 마지막에 붙은 const는 이 함수에서 맴버 변수의 수정을 안 하겠다는 의미
	{
		// 이름은 왼쪽것을 사용
		// Health는 합치고
		// AttackPower는 양쪽다 70%tkdyd
		// DropGold는 합치기
		return Enemy(
			Name +"(합체)",
			Health + other.Health,
			AttackPower * 0.7f + other.AttackPower * 0.7f,
			DropGold + other.DropGold
		);
	}

	// 간단실습 1번
	Enemy operator - (const Enemy& other) const
	{
		return Enemy(
			Name + "(-)",
			Health - (other.Health * 0.5f),
			AttackPower - other.AttackPower * 0.5f,
			DropGold - other.DropGold * 0.5f
		);
	}

	// 간단실습 2번
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
	std::string Name = "무기";
	std::string Desc = "무기 배경 이야기";
	float AttackPower = 10.0f;
	int Price = 100;


	//Weapon() // 없어도 자동으로 생김
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
/// 적 정보 출력하는 함수
/// </summary>
/// <param name="pEnemy"></param>
void PrintEnemy(const Enemy* pEnemy);

void OperatorOverloading0912();

void Practice1_0912();

//float BattleResultPlayerHP(int PlayerY, int PlayerX);
void MazeRandomMonsterBattle(Player& _Player, MonsterData& _Monster);
void MeetHealer(Player& _Player, MonsterData& _Monster);