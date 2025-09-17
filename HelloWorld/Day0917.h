#pragma once
#include <stdint.h>
#include <cstdint>
#include <type_traits>
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


// uint8_t를 사용하려면 #include <stdint.h>가 필요
enum class PlayerState : uint8_t
{
	None = 0,
	OnGround = 1 << 0,
	Jumping = 1 << 1,
	Stunned = 1 << 2,
	Poisoned = 1 << 3,
	Invisible = 1 << 4,
	Invincible = 1 << 5,
	Flying = 1 << 6
};

// PlayerState의 원래 타입을 StateType 이라고 하자고 정하는 것 (별명 붙여주기)
// using StateType = unit8_t;
// std::underlying_type_t는 #include <type_traits> 필요
using StateType = std::underlying_type_t < PlayerState >;

inline PlayerState operator|(PlayerState Left, PlayerState Right)
{
	return static_cast<PlayerState>(static_cast<StateType>(Left) | static_cast<StateType>(Right));
};
inline PlayerState operator&(PlayerState Left, PlayerState Right)
{
	return static_cast<PlayerState>(static_cast<StateType>(Left) & static_cast<StateType>(Right));
};

inline PlayerState operator~(PlayerState Value)
{
	return static_cast<PlayerState>(~static_cast<StateType>(Value));
}

inline PlayerState& operator|=(PlayerState& Left, PlayerState Right)
{
	Left = Left | Right;
	return Left;
}

inline PlayerState& operator&=(PlayerState& Left, PlayerState Right)
{
	Left = Left & Right;
	return Left;
}