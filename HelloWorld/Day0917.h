#pragma once
class Day0917
{
public:
	void TestPolymorphism();
	void TestVirtualFunction();
	void TestPractice1();
	void TestAbtstractClass();
	void TestEnumClass();

private:
	
	//const int Size = 5;
	//int Test[Size]; // 이렇게 하면 안됨, 생성될때 5라고만 알려주는거라서?
	
	// static : 정적멤버
	static constexpr int Size = 5;
	int Test[Day0917::Size];	



};

