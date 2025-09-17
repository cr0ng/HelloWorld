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
// ��ü�� ������ �� ȣ��
//}
//
//Day0916::~Day0916() {
// ��ü�� ������ �� ȣ��
//}

void Day0916::ClassInstance()
{
	Car myCar = Car("��������");	// �ν��Ͻ� ����. ������� Ÿ�̹��� �Լ��� ����Ǿ��� �� �����
	myCar.Accel();

	Car* pCar = new Car("�����Ҵ�");
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
	//Tiger tiger = Tiger("ȣ�ñ�");
	//tiger.Move();
	//tiger.Hunt();
	//tiger.ShowInfo();

	//Animal* pAnimal = new Tiger("ȣ����");
	////pAnimal -> Hunt() ����� �� ����.
	//delete	pAnimal;
	//pAnimal = nullptr;
}

void Day0916::TestBird()
{
	Bird bird = Bird("����");
	bird.Fly();
	bird.Fly();
	bird.Eat();
	bird.MakeSound();
	bird.ShowInfo();
}

void Day0916::TestCat()
{
	Cat cat = Cat("��ι�");
	cat.Grooming();
	cat.Grooming();
	cat.Grooming();
	cat.Grooming();
	cat.ShowInfo();
}

//void Day0916::TestRabbit()
//{
//	Rabbit rabbit = Rabbit("�䲤");
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
	Zombie zombie = Zombie("����",50,10);
	zombie.Attack();
	zombie.Attack();
	zombie.BiteAttack();
	zombie.ShowMonsterInfo();

}

void Day0916::GoblinTest()
{
	Goblin goblin = Goblin("���", 80, 15);
	goblin.Attack();
	goblin.BombAttack();
	goblin.ShowMonsterInfo();
}

void Day0916::OakTest()
{
	Oak oak = Oak("��ũ", 150, 20);
	oak.Attack();
	oak.Attack();
	oak.Attack();
	oak.BatAttack();
	oak.ShowMonsterInfo();
}

void Day0916::SkeletonTest()
{
	Skeleton skeleton = Skeleton("���̷���", 70, 10);
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
