#include "lesson0912.h"
#include "lesson0909.h"
#include <stdio.h>
#include <iostream>

void Lesson0912()
{
	srand(time(0));
	//Enemy Goblin;
	//Goblin.Name = "고블린1호";
	/*printf("이름 : %s\n", Goblin.Name.c_str());
	printf("생명력 : %.1f\n", Goblin.Health);
	printf("공격력 : %.1f\n", Goblin.AttackPower);
	printf("보상 : %d", Goblin.DropGold);*/


	// 간단 실습 1번
	/*Enemy* pGoblin = new Enemy();

	pGoblin->Name = "고블린 2호";
	pGoblin->Health = static_cast<float>(rand() % 100 + 50);
	pGoblin->AttackPower = 2.0f;
	pGoblin->DropGold = static_cast<int>(pGoblin->Health * pGoblin->AttackPower);
	printf("이름 : %s\n", pGoblin->Name.c_str());
	PrintEnemy(pGoblin);

	delete pGoblin;
	pGoblin = nullptr;*/

	// 간단 실습 2번
	/*Weapon Sword;
	Sword.Name = "강철검";
	Sword.Desc = "튼튼하다";
	Sword.AttackPower = 15.0f;
	Sword.Price = 200;*/

	//Enemy Goblins[3];
	//Enemy* Goblins = nullptr;
	//Goblins = new Enemy[3];
	//for (int i = 0; i < 3; i++) {
	//	// std::to_string : 문자열이 아닌것을 string으로 변경해주는 함수
	//	Goblins[i].Name = "고블린" + std::to_string(i + 1) + "호"; 
	//	PrintEnemy(&Goblins[i]); // 특정 주소를 알고싶다면 &
	//}

	//delete[] Goblins;
	//Goblins = nullptr;

	//Enemy NamedGoblin("보스 고블린");
	//PrintEnemy(&NamedGoblin);


	//Enemy* GobGob = new Enemy("모디 고블린",5.0f);
	//PrintEnemy(GobGob);
	//delete GobGob;
	//GobGob = nullptr;

	//Enemy CopyGoblin(NamedGoblin); // 복사 생성자
	//PrintEnemy(&NamedGoblin);
}

void PrintEnemy(const Enemy* pEnemy)
{
	printf("이름 : %s\n", pEnemy->Name.c_str());
	printf("생명력 : %.1f\n", pEnemy->Health);
	printf("공격력 : %.1f\n", pEnemy->AttackPower);
	printf("보상 : %d Gold\n", pEnemy->DropGold);
}

void OperatorOverloading0912()
{
	Enemy Goblin1("고블린1호");
	Enemy Goblin2("고블린2호");

	//Enemy FusionGoblin = Goblin1 + Goblin2;  // 진화 고블린
	//PrintEnemy(&FusionGoblin);

	//Enemy DivideGoblin = Goblin1 - Goblin2;
	//PrintEnemy(&DivideGoblin);

	Enemy OverLoadingGoblin = Goblin1 * 1.5;
	PrintEnemy(&OverLoadingGoblin);
}

void Practice1_0912()
{
	Position p1(2, 3);
	Position p2(5, 1);

	Position sum = p1 + p2;
	Position diff = p1 - p2;

	printf("sum.x = %d, sum.y= %d \n",sum.x, sum.y);
	printf("diff.x = %d, diff.y= %d \n",diff.x, diff.y);
}

//Player P;
//Monster M;

//float BattleResultPlayerHP(int _PlayerY, int _PlayerX)
//{
//
//	P.PlayerY = _PlayerY;
//	P.PlayerX = _PlayerX;
//
//	
//
//	
//
//	return P.PlayerHP;
//}


void MazeRandomMonsterBattle(Player& P, Monster& M)
{
	
	enum turn {
		PLAYER = 1,
		MONSTER = 2,
	};

	int Turn = 1;
	printf("\n★★★★★ 몬스터 출현 ★★★★★★\n");
	printf("플레이어 위치 : %d, %d\n", P.PlayerY, P.PlayerX);
	printf("플레이어 생명력 : %.1f\n", P.PlayerHP);
	printf("플레이어 공격력 : %.1f\n", P.PlayerAttack);

	printf("몬스터 생명력 : %.1f\n", M.MonsterHP);
	printf("몬스터 공격력 : % .1f\n", M.MonsterAttack);
	printf("몬스터 보상(HP 회복)  : %.d\n", M.MonsterReward);

	printf("\n전투를 시작합니다.\n플레이어 체력 : %.1f, 몬스터 체력 : %.1f \n플레이어 먼저 시작 \n", P.PlayerHP, M.MonsterHP);

	while ((P.PlayerHP > 0) && (M.MonsterHP > 0)) {
		int CRITICAL = rand() % 100 + 1;
		float Damage = 0;

		if (Turn == PLAYER) {
			//플레이어 공격 차례
			Damage = P.PlayerAttack;
			if (CRITICAL > 1 && CRITICAL < 11) {
				printf("♥크리티컬♥");
				Damage = P.PlayerAttack * 2;
			}
			printf("\n▶ 플레이어 공격 : %.1f 데미지\n", Damage);
			M.MonsterHP -= Damage;
			
			printf("몬스터 남은 체력 : %.1f \n", M.MonsterHP);
			Turn = MONSTER;
		}
		else {
			//몬스터 공격 차례
			Damage = M.MonsterAttack;
			if (CRITICAL > 1 && CRITICAL < 11) {
				printf("♥크리티컬♥");
				Damage = M.MonsterAttack * 2;
			}
			printf("\n▷ 몬스터 공격 : %.1f 데미지\n",Damage);
			P.PlayerHP -= Damage;
			printf("플레이어 남은 체력 : %.1f \n\n", P.PlayerHP);
			Turn = PLAYER;
		}
	}

	if (P.PlayerHP > 0) {
		printf("플레이어의 승리입니다.\n");
		/*P.PlayerHP += M.MonsterReward;
		printf("보상으로 %.d 체력을 획득하였습니다.\n", M.MonsterReward);*/
		printf("보상으로 %.d 원을 획득하였습니다.\n", M.MonsterReward);
		P.Money += M.MonsterReward;
		printf("플레이어의 남은 체력 : %.1f \n", P.PlayerHP);
		printf("플레이어 소지금 : %.d \n", P.Money);

	}
	else {
		printf("플레이어의 패배입니다.\n");
	}
}

void MeetHealer(Player& P, Monster& M)
{
	enum AttackOrHP {
		ATTACK,
		HP
	};

	int GiveMoney = 0;

	printf("\n\n ♣♣♣ 이런 미로에 사람이 있다니 ♣♣♣ \n 돈을 준다면 좋은 일을 해 줄수도..?");
	printf("플레이어 생명력 : %.1f\n", P.PlayerHP);
	printf("플레이어 소지금 : %d\n", P.Money);

	printf("낯선이에게 얼마를 주시겠습니까? ");
	std::cin >> GiveMoney;

	while (GiveMoney > P.Money) {
		printf("소지금보다 많은 금액은 낼 수 없습니다.\n");
		printf("낯선이에게 얼마를 주시겠습니까? ");
		std::cin >> GiveMoney;
	}

	P.Money -= GiveMoney;

	int ChooseOne;
	printf("힘과 체력 중에 무엇을 고르시겠습니까?? (0: 힘, 1:체력)");
	std::cin >> ChooseOne;

	if (ChooseOne == ATTACK) {
		P.PlayerAttack += GiveMoney;
	}
	else if (ChooseOne == HP) {
		P.PlayerHP += GiveMoney;
	}
	else {
		while (!(ChooseOne == 0 || ChooseOne == 1)) {
			printf("힘과 체력중에서 고르세요!!! \n");

			printf("힘과 체력 중에 무엇을 고르시겠습니까?? (0: 힘, 1:체력)");
			std::cin >> ChooseOne;
		}
	}

	printf("낯선이는 매우 흡족해하며 마법을 걸어주었습니다. \n");
	if (ChooseOne == ATTACK) {
		printf("플레이어의 공격력이 %.1f가 되었습니다. \n", P.PlayerAttack);
	}
	else if (ChooseOne == HP) {
		printf("플레이어의 HP가 %.1f가 되었습니다. \n", P.PlayerHP);
	}
	printf("플레이어 소지금 : %d\n", P.Money);
}
