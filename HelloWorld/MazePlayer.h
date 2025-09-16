#pragma once
#include <string>

class MazePlayer
{
public :
	std::string Name = "플레이어";

	MazePlayer() = default;
	MazePlayer(std::string InName, float InStamina, float InAttackPower)
		:Name(InName), Stamina(InStamina), AttackPower(InAttackPower)
	{

	}

	void SpecialAttack();

	// Getter/Setter
	inline const std::string& GetName() const { return Name; }
	inline const float GetStamina() const { return Stamina; }
	inline const float GetAttackPower() const { return AttackPower; }

protected:
	float Stamina = 100.0f;
	float AttackPower = 10.0f;

	inline void setStamina(float InStamina) {
		Stamina = InStamina;
	}

	inline void GetAttackPower(float InAttackPower) {
		AttackPower = InAttackPower;
	}


private:

	float SpecialPower = 30.0f;
	inline const float GetSpecialPower() { return SpecialPower; }
	
};

