#pragma once
#include <string>

class Animal
{
public:

	virtual void Move() = 0;
	virtual void MakeSound();
	void Eat();
	void Sleep();
	void ShowInfo();

	// Getter/Setter
	inline const std::string& GetName() const { return Name; } // 확인용, 스트링크기가 크기도 하니 참조로
	inline const int GetAge() const { return Age; }

	// Energy는 외부에서는 읽기 전용이다.
	inline const float GetEnergy() const { return Energy; }

public:

	Animal() = default;
	Animal(std::string InName)
		: Name(InName)
	{
	} // 짧은 경우는 함수의 구현이 헤더에 있어도 된다. (자동 inline 처리)

	 //Animal(const char* InName, float InEnergy, int InAge);
	 //~Animal();
	 // 
	virtual ~Animal() {}

protected:

	std::string Name = "동물";
	float Energy = 1.0f;	// 0.0f ~ 1.0f, 1.0f 일 때 100%;
	int Age = 0;

	inline void SetEnergy(float InEnergy)
	{
		//Energy의 범위는 0.0f ~ 1.0f이다.
		Energy = InEnergy;
		if (InEnergy < 0)
		{
			Energy = 0.0f;
		}
		else if (InEnergy > 1.0f)
		{
			Energy = 1.0f;
		}
		else
		{
			Energy = InEnergy;
		}
	}

	inline void SetAge(int InAge)
	{
		Age = InAge;
	}
};

