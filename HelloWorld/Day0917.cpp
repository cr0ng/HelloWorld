#include "Day0917.h"
#include "Tiger.h"
#include "Hawk.h"
#include "TestSample.h"
#include "Cat.h"
#include "Bird.h"
#include "Shape.h"
#include "stdint.h"

void Day0917::TestPolymorphism()
{
	//Tiger* pTiger = new Tiger("ȣ����");
	Hawk* pHawk = new Hawk("����");
	Cat* pCat = new Cat("����");

	printf("ȣ���� �̵� \n");
	pTiger->Move();
	pTiger->Swim();
	pTiger->BattleAnimal();
	printf("���� �̵� \n");
	pHawk->Move();

	printf("���� �̵�\n");
	pCat->Swim();
	pCat->BattleAnimal();

	Animal* pAnimal = pHawk;
	pAnimal->Move();	//Animal�� Move�� �����
						//-> �����Լ��� �� �Ŀ��� ���� Ŭ������ Move�� ����ȴ�.
	pAnimal = pTiger;
	pAnimal->Move();

	// C ��Ÿ�� ĳ����(����)
	//Tiger* pTempTiger = (Tiger*)pAnimal;
	//pTempTiger->Hunt();
	//((Tiger*)pAnimal)->Hunt();
	
	// C++ ��Ÿ�� ĳ���� �� �ϳ�
	Tiger* pTempTiger = dynamic_cast<Tiger*>(pAnimal);
	if (pTempTiger == nullptr)
	{
		// pAnimal�� Tiger*�� �ƴϴ�
	}
	else {
		// pAnimal�� ����� �ּҴ� Tiger�� �ּҰ� �´�.
		pTempTiger->Hunt();
	}

	//pAnimal->Hunt(); // ��� �Ұ���

	delete pTiger;
	pTiger = nullptr;

	delete pHawk;
	pHawk = nullptr;

	delete pCat;
	pCat = nullptr;

}

void Day0917::TestVirtualFunction()
{
	Parent* pParent = new Child();	// ����
	delete pParent;
	pParent = nullptr;
}

void Day0917::TestPractice1()
{
	// ���ܽǽ�
	// Animal* �迭 �����
	// ���� ������ ���� �ֱ�
	// �迭�� ����ִ� ��� ������ MakeSound �����ϱ�

	//���� ¥����..
	//std::string Animal[5] = {"ȣ����","�����","����","�䳢","��"};
//	std::string* pAnimal = Animal;

	//for(int i= 0 ; i<)
	//Tiger* pTiger = new Tiger("ȣ��");

	const int Size = 5;
	Animal* Zoo[Size];
	//Zoo[0] = new Tiger("ȣ����");
	//Zoo[1] = new Tiger("ȣ����");
	Zoo[2] = new Hawk("����");
	Zoo[3] = new Cat("��ι�");
	Zoo[4] = new Bird("����");

	for (int i = 0; i < 5; i++)
	{
		Zoo[i]->MakeSound();
	}

	for (int i = 0; i < 5; i++) {
		delete Zoo[i];
		Zoo[i] = nullptr;
	}

}

void Day0917::TestAbtstractClass()
{
	//Shape* pShape = new Shape(); // �ȵ�

}

void Day0917::TestEnumClass()
{
	enum Color
	{
		Red = 0,
		Green,
		Blue
	};
	enum Fruit
	{
		Apple =0,
		Orange,
		Banana
	};
	//enum TrafficLight 
	//{
	//	Red, Yellow,Green
	//}; // ���� enum�� ������ �����̱� ������ �̸��� ��ġ�� �ȵ�

	Color myColor = Green;
	Fruit myFruit = Orange;
	
	if (myColor == myFruit)
	{
		// �������δ� ���� �ȵ�����, ���������δ� ����� ��
	}

	enum class Color2
	{
		Red = 0,
		Green,
		Blue
	};
	enum class Fruit2
	{
		Apple = 0,
		Orange,
		Banana
	};
	enum class TrafficLight2
	{
		Red=0,	// TrafficLight2�ȿ� �ִ� Red�� ������ �̸��� ��ġ�� �ʴ´�.
		Yellow,
		Green
	};
	Color2 myColor2 = Color2::Red;		// ����ȯ�ؾ���
	Fruit2 myFruit = Fruit2::Apple;

	//if (myColor2 == myFruit2) // Ÿ���� �޶� �� x
	//{
	// // ���������� ����.
	//}

	//int Number = myColor2; // �Ͻ��� ĳ������ ����
	int Number = static_cast<int>(myColor2); // ����� ĳ������ �ʼ�


	//unit8_t�� ����Ϸ��� #include "stdint.h"�� �ʿ�
	enum class PlayerState : uint8_t
	{
		None = 0,
		OnGround	= 1 << 0,
		Jumping		= 1 << 1,
		Stunned		= 1 << 2,
		Poisoned	= 1 << 3,
		Invisible	= 1 << 4,
		Invincible	= 1 << 5,
		Flying		= 1 << 6
	};
}
