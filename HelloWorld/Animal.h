#pragma once
#include <string>

class Animal
{
public:
	std::string Name = "����";

	Animal() = default;
	Animal(std::string InName)
		: Name(InName)
	{ } // ª�� ���� �Լ��� ������ ����� �־ �ȴ�. (�ڵ� inline ó��)
	virtual ~Animal(){}

	//Animal(const char* InName, float InEnergy, int InAge);
	//~Animal();

	virtual void Move() = 0; // Move�� ���������Լ���
	virtual void MakeSound();  // MakeSound�� �����Լ���
	void Eat();
	void Sleep();
	void ShowInfo();

	// Getter/Setter
	inline const std::string& GetName() const { return Name; } // Ȯ�ο�, ��Ʈ��ũ�Ⱑ ũ�⵵ �ϴ� ������
	inline const int GetAge() const { return Age; }

	// Energy�� �ܺο����� �б� �����̴�.
	inline const float GetEnergy() const { return Energy; }

protected:
	float Energy = 1.0f;	// 0.0f ~ 1.0f, 1.0f �� �� 100%;
	int Age = 0;

	inline void SetEnergy(float InEnergy)
	{
		//Energy�� ������ 0.0f ~ 1.0f�̴�.
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

