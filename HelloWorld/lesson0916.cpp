#include "lesson0916.h"
#include "Car.h"
#include "Animal.h"
#include "Tiger.h"
#include "Bird.h"
#include "Cat.h"
#include "Rabbit.h"
#include "Monster.h"
#include "Zombie.h"
#include "Goblin.h"
#include "Oak.h"
#include "Skeleton.h"
#include "MazePlayer.h"

//Day0916::Day0916() {
// 객체가 생성될 때 호출
//}
//
//Day0916::~Day0916() {
// 객체가 해제될 때 호출
//}

void Day0916::ClassInstance()
{
	Car myCar = Car("지역변수");	// 인스턴스 생성. 사라지는 타이밍은 함수가 종료되었을 때 사라짐
	myCar.Accel();

	Car* pCar = new Car("동적할당");
	pCar->HandleTurn();
	delete pCar;
	pCar = nullptr;
}

void Day0916::TestAnimal()
{
	/*Animal animal;
	animal.ShowInfo();
	animal.MakeSound();
	animal.Move();
	animal.Move();
	animal.Move();
	animal.Eat();
	animal.Move();
	animal.Move();
	animal.Sleep();
	animal.ShowInfo();

	int Age = animal.GetAge();
	const std::string& Name = animal.GetName();*/
}

void Day0916::TestTiger()
{
	//Tiger tiger = Tiger("호시기");
	//tiger.Move();
	//tiger.Hunt();
	//tiger.ShowInfo();

	//Animal* pAnimal = new Tiger("호돌이");
	////pAnimal -> Hunt() 사용할 수 없다.
	//delete	pAnimal;
	//pAnimal = nullptr;
}

void Day0916::TestBird()
{
	Bird bird = Bird("참새");
	bird.Fly();
	bird.Fly();
	bird.Eat();
	bird.MakeSound();
	bird.ShowInfo();
}

void Day0916::TestCat()
{
	Cat cat = Cat("고먐미");
	cat.Grooming();
	cat.Grooming();
	cat.Grooming();
	cat.Grooming();
	cat.ShowInfo();
}

//void Day0916::TestRabbit()
//{
//	Rabbit rabbit = Rabbit("토깽");
//	rabbit.Jump();
//	rabbit.Jump();
//	rabbit.Jump();
//	rabbit.ShowInfo();
//
//}

void Day0916::TestMonsters()
{
	Monster monster;
	monster.Attack();
	monster.Attack();
	monster.Attack();
	monster.ShowMonsterInfo();

	//float Stamina = monster.GetStamina();
	//float AttackPower = monster.GetAttackPower();
	//const std::string& Name = monster.GetName();
}

void Day0916::ZombieTest()
{
	Zombie zombie = Zombie("좀비",50,10);
	zombie.Attack();
	zombie.Attack();
	zombie.BiteAttack();
	zombie.ShowMonsterInfo();

}

void Day0916::GoblinTest()
{
	Goblin goblin = Goblin("고블린", 80, 15);
	goblin.Attack();
	goblin.BombAttack();
	goblin.ShowMonsterInfo();
}

void Day0916::OakTest()
{
	Oak oak = Oak("오크", 150, 20);
	oak.Attack();
	oak.Attack();
	oak.Attack();
	oak.BatAttack();
	oak.ShowMonsterInfo();
}

void Day0916::SkeletonTest()
{
	Skeleton skeleton = Skeleton("스켈레톤", 70, 10);
	skeleton.Attack();
	skeleton.ThrowBoneAttack();
	skeleton.ThrowBoneAttack();
	skeleton.ShowMonsterInfo();
}

void Day0916::MazePlayerTest()
{
	MazePlayer mazePlayer = MazePlayer();
	mazePlayer.SpecialAttack();
}
