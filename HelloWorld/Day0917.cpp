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
	//Tiger* pTiger = new Tiger("호식이");
	Hawk* pHawk = new Hawk("매형");
	Cat* pCat = new Cat("냥이");

	printf("호식이 이동 \n");
	pTiger->Move();
	pTiger->Swim();
	pTiger->BattleAnimal();
	printf("매형 이동 \n");
	pHawk->Move();

	printf("동물 이동\n");
	pCat->Swim();
	pCat->BattleAnimal();

	Animal* pAnimal = pHawk;
	pAnimal->Move();	//Animal의 Move가 실행됨
						//-> 가상함수가 된 후에는 원래 클래스의 Move가 실행된다.
	pAnimal = pTiger;
	pAnimal->Move();

	// C 스타일 캐스팅(위험)
	//Tiger* pTempTiger = (Tiger*)pAnimal;
	//pTempTiger->Hunt();
	//((Tiger*)pAnimal)->Hunt();
	
	// C++ 스타일 캐스팅 중 하나
	Tiger* pTempTiger = dynamic_cast<Tiger*>(pAnimal);
	if (pTempTiger == nullptr)
	{
		// pAnimal은 Tiger*가 아니다
	}
	else {
		// pAnimal에 저장된 주소는 Tiger의 주소가 맞다.
		pTempTiger->Hunt();
	}

	//pAnimal->Hunt(); // 사용 불가능

	delete pTiger;
	pTiger = nullptr;

	delete pHawk;
	pHawk = nullptr;

	delete pCat;
	pCat = nullptr;

}

void Day0917::TestVirtualFunction()
{
	Parent* pParent = new Child();	// 가능
	delete pParent;
	pParent = nullptr;
}

void Day0917::TestPractice1()
{
	// 간단실습
	// Animal* 배열 만들기
	// 여러 종류의 동물 넣기
	// 배열에 들어있는 모든 동물의 MakeSound 실행하기

	//내가 짜던거..
	//std::string Animal[5] = {"호랑이","고양이","참새","토끼","매"};
//	std::string* pAnimal = Animal;

	//for(int i= 0 ; i<)
	//Tiger* pTiger = new Tiger("호랑");

	const int Size = 5;
	Animal* Zoo[Size];
	//Zoo[0] = new Tiger("호식이");
	//Zoo[1] = new Tiger("호돌이");
	Zoo[2] = new Hawk("매형");
	Zoo[3] = new Cat("고먐미");
	Zoo[4] = new Bird("참새");

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
	//Shape* pShape = new Shape(); // 안됨

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
	//}; // 기존 enum은 범위가 전역이기 때문에 이름이 겹치면 안됨

	Color myColor = Green;
	Fruit myFruit = Orange;
	
	if (myColor == myFruit)
	{
		// 논리적으로는 말이 안되지만, 문법적으로는 허용이 됨
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
		Red=0,	// TrafficLight2안에 있는 Red기 때문에 이름이 겹치지 않는다.
		Yellow,
		Green
	};
	Color2 myColor2 = Color2::Red;		// 형변환해야함
	Fruit2 myFruit = Fruit2::Apple;

	//if (myColor2 == myFruit2) // 타입이 달라서 비교 x
	//{
	// // 문법적으로 금지.
	//}

	//int Number = myColor2; // 암시적 캐스팅은 금지
	int Number = static_cast<int>(myColor2); // 명시적 캐스팅이 필수


	//unit8_t를 사용하려면 #include "stdint.h"가 필요
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
