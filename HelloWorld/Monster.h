#pragma once
#include <string>

class Monster
{
public : 

	Monster() = default;
	Monster(std::string InName, float InStamina, float InAttackPower)
		:Name(InName), Stamina(InStamina), AttackPower(InAttackPower)
	{}
	~Monster() {
		Name.clear();
	}
	void Attack(); // 공통 함수
	void ShowMonsterInfo();

	// Getter/Setter
	inline const std::string& GetName() const { return Name; }
	inline const float GetStamina() const { return Stamina; }
	inline const float GetAttackPower() const { return AttackPower; }

protected : 
	inline void setStamina(float InStamina) {
		Stamina = InStamina;
	}

	inline void GetAttackPower(float InAttackPower) {
		AttackPower = InAttackPower;
	}


	std::string Name = "괴물";
	float Stamina = 100.0f;
	float AttackPower = 10.0f;
};

