#pragma once
class lesson0924
{
public:
	void TestLambda();
	void TestLambda2();
	void TestLambdaPractice();
	void TestSet();
	void TestSetPractice();
	void TestMap();
	void TestUnOrderedMap();
};

struct SortTest
{
	int a;
	float b;

	SortTest(int InA, float InB) : a(InA), b(InB) {}
};

bool operator<(const SortTest& Left, const SortTest& Right);

enum class CharacterType
{
	Warrior,
	Mage,
	Archer,
	Thief
};

struct CharacterStatus
{
	int Level = 0;
	int Health = 100;
	int Attack = 10;
};