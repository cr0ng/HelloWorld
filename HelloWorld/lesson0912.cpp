#include "lesson0912.h"
#include "lesson0909.h"
#include <stdio.h>
#include <iostream>

void Lesson0912()
{
	srand(time(0));
	//Enemy Goblin;
	//Goblin.Name = "���1ȣ";
	/*printf("�̸� : %s\n", Goblin.Name.c_str());
	printf("����� : %.1f\n", Goblin.Health);
	printf("���ݷ� : %.1f\n", Goblin.AttackPower);
	printf("���� : %d", Goblin.DropGold);*/


	// ���� �ǽ� 1��
	/*Enemy* pGoblin = new Enemy();

	pGoblin->Name = "��� 2ȣ";
	pGoblin->Health = static_cast<float>(rand() % 100 + 50);
	pGoblin->AttackPower = 2.0f;
	pGoblin->DropGold = static_cast<int>(pGoblin->Health * pGoblin->AttackPower);
	printf("�̸� : %s\n", pGoblin->Name.c_str());
	PrintEnemy(pGoblin);

	delete pGoblin;
	pGoblin = nullptr;*/

	// ���� �ǽ� 2��
	/*Weapon Sword;
	Sword.Name = "��ö��";
	Sword.Desc = "ưư�ϴ�";
	Sword.AttackPower = 15.0f;
	Sword.Price = 200;*/

	//Enemy Goblins[3];
	//Enemy* Goblins = nullptr;
	//Goblins = new Enemy[3];
	//for (int i = 0; i < 3; i++) {
	//	// std::to_string : ���ڿ��� �ƴѰ��� string���� �������ִ� �Լ�
	//	Goblins[i].Name = "���" + std::to_string(i + 1) + "ȣ"; 
	//	PrintEnemy(&Goblins[i]); // Ư�� �ּҸ� �˰�ʹٸ� &
	//}

	//delete[] Goblins;
	//Goblins = nullptr;

	//Enemy NamedGoblin("���� ���");
	//PrintEnemy(&NamedGoblin);


	//Enemy* GobGob = new Enemy("��� ���",5.0f);
	//PrintEnemy(GobGob);
	//delete GobGob;
	//GobGob = nullptr;

	//Enemy CopyGoblin(NamedGoblin); // ���� ������
	//PrintEnemy(&NamedGoblin);
}

void PrintEnemy(const Enemy* pEnemy)
{
	printf("�̸� : %s\n", pEnemy->Name.c_str());
	printf("����� : %.1f\n", pEnemy->Health);
	printf("���ݷ� : %.1f\n", pEnemy->AttackPower);
	printf("���� : %d Gold\n", pEnemy->DropGold);
}

void OperatorOverloading0912()
{
	Enemy Goblin1("���1ȣ");
	Enemy Goblin2("���2ȣ");

	//Enemy FusionGoblin = Goblin1 + Goblin2;  // ��ȭ ���
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
	printf("\n�ڡڡڡڡ� ���� ���� �ڡڡڡڡڡ�\n");
	printf("�÷��̾� ��ġ : %d, %d\n", P.PlayerY, P.PlayerX);
	printf("�÷��̾� ����� : %.1f\n", P.PlayerHP);
	printf("�÷��̾� ���ݷ� : %.1f\n", P.PlayerAttack);

	printf("���� ����� : %.1f\n", M.MonsterHP);
	printf("���� ���ݷ� : % .1f\n", M.MonsterAttack);
	printf("���� ����(HP ȸ��)  : %.d\n", M.MonsterReward);

	printf("\n������ �����մϴ�.\n�÷��̾� ü�� : %.1f, ���� ü�� : %.1f \n�÷��̾� ���� ���� \n", P.PlayerHP, M.MonsterHP);

	while ((P.PlayerHP > 0) && (M.MonsterHP > 0)) {
		int CRITICAL = rand() % 100 + 1;
		float Damage = 0;

		if (Turn == PLAYER) {
			//�÷��̾� ���� ����
			Damage = P.PlayerAttack;
			if (CRITICAL > 1 && CRITICAL < 11) {
				printf("��ũ��Ƽ�â�");
				Damage = P.PlayerAttack * 2;
			}
			printf("\n�� �÷��̾� ���� : %.1f ������\n", Damage);
			M.MonsterHP -= Damage;
			
			printf("���� ���� ü�� : %.1f \n", M.MonsterHP);
			Turn = MONSTER;
		}
		else {
			//���� ���� ����
			Damage = M.MonsterAttack;
			if (CRITICAL > 1 && CRITICAL < 11) {
				printf("��ũ��Ƽ�â�");
				Damage = M.MonsterAttack * 2;
			}
			printf("\n�� ���� ���� : %.1f ������\n",Damage);
			P.PlayerHP -= Damage;
			printf("�÷��̾� ���� ü�� : %.1f \n\n", P.PlayerHP);
			Turn = PLAYER;
		}
	}

	if (P.PlayerHP > 0) {
		printf("�÷��̾��� �¸��Դϴ�.\n");
		/*P.PlayerHP += M.MonsterReward;
		printf("�������� %.d ü���� ȹ���Ͽ����ϴ�.\n", M.MonsterReward);*/
		printf("�������� %.d ���� ȹ���Ͽ����ϴ�.\n", M.MonsterReward);
		P.Money += M.MonsterReward;
		printf("�÷��̾��� ���� ü�� : %.1f \n", P.PlayerHP);
		printf("�÷��̾� ������ : %.d \n", P.Money);

	}
	else {
		printf("�÷��̾��� �й��Դϴ�.\n");
	}
}

void MeetHealer(Player& P, Monster& M)
{
	enum AttackOrHP {
		ATTACK,
		HP
	};

	int GiveMoney = 0;

	printf("\n\n ������ �̷� �̷ο� ����� �ִٴ� ������ \n ���� �شٸ� ���� ���� �� �ټ���..?");
	printf("�÷��̾� ����� : %.1f\n", P.PlayerHP);
	printf("�÷��̾� ������ : %d\n", P.Money);

	printf("�����̿��� �󸶸� �ֽðڽ��ϱ�? ");
	std::cin >> GiveMoney;

	while (GiveMoney > P.Money) {
		printf("�����ݺ��� ���� �ݾ��� �� �� �����ϴ�.\n");
		printf("�����̿��� �󸶸� �ֽðڽ��ϱ�? ");
		std::cin >> GiveMoney;
	}

	P.Money -= GiveMoney;

	int ChooseOne;
	printf("���� ü�� �߿� ������ ���ðڽ��ϱ�?? (0: ��, 1:ü��)");
	std::cin >> ChooseOne;

	if (ChooseOne == ATTACK) {
		P.PlayerAttack += GiveMoney;
	}
	else if (ChooseOne == HP) {
		P.PlayerHP += GiveMoney;
	}
	else {
		while (!(ChooseOne == 0 || ChooseOne == 1)) {
			printf("���� ü���߿��� ������!!! \n");

			printf("���� ü�� �߿� ������ ���ðڽ��ϱ�?? (0: ��, 1:ü��)");
			std::cin >> ChooseOne;
		}
	}

	printf("�����̴� �ſ� �������ϸ� ������ �ɾ��־����ϴ�. \n");
	if (ChooseOne == ATTACK) {
		printf("�÷��̾��� ���ݷ��� %.1f�� �Ǿ����ϴ�. \n", P.PlayerAttack);
	}
	else if (ChooseOne == HP) {
		printf("�÷��̾��� HP�� %.1f�� �Ǿ����ϴ�. \n", P.PlayerHP);
	}
	printf("�÷��̾� ������ : %d\n", P.Money);
}
